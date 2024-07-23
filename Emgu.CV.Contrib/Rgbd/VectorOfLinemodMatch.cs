﻿//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2022 by EMGU Corporation. All rights reserved.
//
//  Vector of LinemodMatch
//
//  This file is automatically generated, do not modify.
//----------------------------------------------------------------------------



using System;
using System.Drawing;
using System.Diagnostics;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Emgu.CV.Structure;

namespace Emgu.CV.Linemod
{
   /// <summary>
   /// Wrapped class of the C++ standard vector of LinemodMatch.
   /// </summary>
   [Serializable]
   [DebuggerTypeProxy(typeof(VectorOfLinemodMatch.DebuggerProxy))]
   public partial class VectorOfLinemodMatch : Emgu.CV.Util.UnmanagedVector
#if false
      , IInputOutputArray
#endif
   {
      private readonly bool _needDispose;
   
      static VectorOfLinemodMatch()
      {
         CvInvoke.Init();
      }

      /// <summary>
      /// Create an empty standard vector of LinemodMatch
      /// </summary>
      public VectorOfLinemodMatch()
         : this(VectorOfLinemodMatchCreate(), true)
      {
      }

      internal VectorOfLinemodMatch(IntPtr ptr, bool needDispose)
      {
         _ptr = ptr;
         _needDispose = needDispose;
      }

      /// <summary>
      /// Create an standard vector of LinemodMatch of the specific size
      /// </summary>
      /// <param name="size">The size of the vector</param>
      public VectorOfLinemodMatch(int size)
         : this( VectorOfLinemodMatchCreateSize(size), true)
      {
      }

      /// <summary>
      /// Create an standard vector of LinemodMatch with the initial values
      /// </summary>
      /// <param name="values">The initial values</param>
      public VectorOfLinemodMatch(params Emgu.CV.Linemod.Match[] values)
        : this()
      {
        Push(values);
      }

      /// <summary>
      /// Get the size of the vector
      /// </summary>
      public override int Size
      {
         get
         {
            return VectorOfLinemodMatchGetSize(_ptr);
         }
      }
	  
	  /// <summary>
      /// The pointer to the first element on the vector. In case of an empty vector, IntPtr.Zero will be returned.
      /// </summary>
      public override IntPtr StartAddress
      {
         get
         {
            return VectorOfLinemodMatchGetStartAddress(_ptr);
         }
      }
	  
	  
	  /// <summary>
      /// The size of memory in bytes, that is needed to hold all the items in this vector
      /// </summary>
      public override long Length
      {
         get
         {
            return VectorOfLinemodMatchGetMemorySize(_ptr);
         }
      }
	  

      /// <summary>
      /// Clear the vector
      /// </summary>
      public void Clear()
      {
         VectorOfLinemodMatchClear(_ptr);
      }

      /// <summary>
      /// Push a value into the standard vector
      /// </summary>
      /// <param name="value">The value to be pushed to the vector</param>
      public void Push(Emgu.CV.Linemod.Match value)
      {
         VectorOfLinemodMatchPush(_ptr, value.Ptr);
      }

      /// <summary>
      /// Push multiple values into the standard vector
      /// </summary>
      /// <param name="values">The values to be pushed to the vector</param>
      public void Push(Emgu.CV.Linemod.Match[] values)
      {
         foreach (Emgu.CV.Linemod.Match value in values)
            Push(value);
      }

      /// <summary>
      /// Push multiple values from the other vector into this vector
      /// </summary>
      /// <param name="other">The other vector, from which the values will be pushed to the current vector</param>
      public void Push(VectorOfLinemodMatch other)
      {
         VectorOfLinemodMatchPushVector(_ptr, other);
      }
      
      /// <summary>
      /// Get the item in the specific index
      /// </summary>
      /// <param name="index">The index</param>
      /// <returns>The item in the specific index</returns>
      public Emgu.CV.Linemod.Match this[int index]
      {
         get
         {
            IntPtr itemPtr = IntPtr.Zero;
            VectorOfLinemodMatchGetItemPtr(_ptr, index, ref itemPtr);
            return new Emgu.CV.Linemod.Match(itemPtr, false);
         }
      }

      /// <summary>
      /// Release the standard vector
      /// </summary>
      protected override void DisposeObject()
      {
         if (_needDispose && _ptr != IntPtr.Zero)
            VectorOfLinemodMatchRelease(ref _ptr);
      }

#if false
      /// <summary>
      /// Get the pointer to cv::_InputArray
      /// </summary>
      /// <returns>The input array</returns>
      public InputArray GetInputArray()
      {
        return new InputArray( cveInputArrayFromVectorOfLinemodMatch(_ptr), this );
      }

      /// <summary>
      /// Get the pointer to cv::_OutputArray
      /// </summary>
      /// <returns>The output array</returns>
      public OutputArray GetOutputArray()
      {
         return new OutputArray( cveOutputArrayFromVectorOfLinemodMatch(_ptr), this );
      }

      /// <summary>
      /// Get the pointer to cv::_InputOutputArray
      /// </summary>
      /// <returns>The input output array</returns>
      public InputOutputArray GetInputOutputArray()
      {
         return new InputOutputArray( cveInputOutputArrayFromVectorOfLinemodMatch(_ptr), this );
      }
#endif
      
      /// <summary>
      /// The size of the item in this Vector, counted as size in bytes.
      /// </summary>
      public static int SizeOfItemInBytes
      {
         get { return VectorOfLinemodMatchSizeOfItemInBytes(); }
      }

#if false
      /// <summary>
      /// Create the standard vector of LinemodMatch 
      /// </summary>
      /// <param name="values">The values to be pushed to the vector</param>
      public VectorOfLinemodMatch(Rectangle[][] values)
         : this()
      {
         using (LinemodMatch v = new LinemodMatch())
         {
            for (int i = 0; i < values.Length; i++)
            {
               v.Push(values[i]);
               Push(v);
               v.Clear();
            }
         }
      }

      /// <summary>
      /// Convert the standard vector to arrays of arrays of Rectangle
      /// </summary>
      /// <returns>Arrays of arrays of the Rectangle</returns>
      public Rectangle[][] ToArrayOfArray()
      {
         int size = Size;
         Rectangle[][] res = new Rectangle[size][];
         for (int i = 0; i < size; i++)
         {
            using (LinemodMatch v = this[i])
            {
               res[i] = v.ToArray();
            }
         }
         return res;
      }
#endif

      internal class DebuggerProxy
      {
         private VectorOfLinemodMatch _v;

         public DebuggerProxy(VectorOfLinemodMatch v)
         {
            _v = v;
         }

#if false
         public Rectangle[][] Values
         {
            get { return _v.ToArrayOfArray(); }
         }
#else
         public Emgu.CV.Linemod.Match[] Values
         {
            get
            {
               Emgu.CV.Linemod.Match[] result = new Emgu.CV.Linemod.Match[_v.Size];
               for (int i = 0; i < result.Length; i++)
               {
                  result[i] = _v[i];
               }
               return result;
            }
         }
#endif
      }


      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern IntPtr VectorOfLinemodMatchCreate();

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern IntPtr VectorOfLinemodMatchCreateSize(int size);

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern void VectorOfLinemodMatchRelease(ref IntPtr v);

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern int VectorOfLinemodMatchGetSize(IntPtr v);

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern IntPtr VectorOfLinemodMatchGetStartAddress(IntPtr v);
	  
	  [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern long VectorOfLinemodMatchGetMemorySize(IntPtr v);
	  
      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern void VectorOfLinemodMatchPush(IntPtr v, IntPtr value);

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern void VectorOfLinemodMatchPushVector(IntPtr ptr, IntPtr otherPtr);
      
      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern void VectorOfLinemodMatchClear(IntPtr v);

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern void VectorOfLinemodMatchGetItemPtr(IntPtr vec, int index, ref IntPtr element);

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern int VectorOfLinemodMatchSizeOfItemInBytes();

#if false
      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern IntPtr cveInputArrayFromVectorOfLinemodMatch(IntPtr vec);

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern IntPtr cveOutputArrayFromVectorOfLinemodMatch(IntPtr vec);

      [DllImport(CvInvoke.ExternLibrary, CallingConvention = CvInvoke.CvCallingConvention)]
      internal static extern IntPtr cveInputOutputArrayFromVectorOfLinemodMatch(IntPtr vec);
#endif
   }
}

