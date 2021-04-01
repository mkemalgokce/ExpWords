#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000007 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,TResult>)
// 0x00000008 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000009 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.Dictionary`2<TKey,TSource> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000011 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000014 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000019 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001D System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`3<TSource,TSource,TSource>)
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000020 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000021 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000022 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000023 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000024 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000028 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000029 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000002A System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000002C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000032 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000034 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000037 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000039 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003A System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003B System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x0000003C System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000047 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000048 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004A System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::.ctor(System.Int32)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.IDisposable.Dispose()
// 0x0000004C System.Boolean System.Linq.Enumerable/<SelectIterator>d__5`2::MoveNext()
// 0x0000004D System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::<>m__Finally1()
// 0x0000004E TResult System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.Reset()
// 0x00000050 System.Object System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerator.get_Current()
// 0x00000051 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000052 System.Collections.IEnumerator System.Linq.Enumerable/<SelectIterator>d__5`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000053 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000054 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000056 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000058 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000059 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x0000005A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x0000005B TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005C System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000005D System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000005E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005F System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000060 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000061 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000062 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000063 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000064 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000065 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000066 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x00000067 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000068 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000069 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000006A System.Func`2<TElement,TElement> System.Linq.IdentityFunction`1::get_Instance()
// 0x0000006B System.Void System.Linq.IdentityFunction`1/<>c::.cctor()
// 0x0000006C System.Void System.Linq.IdentityFunction`1/<>c::.ctor()
// 0x0000006D TElement System.Linq.IdentityFunction`1/<>c::<get_Instance>b__1_0(TElement)
// 0x0000006E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000006F System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000070 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000071 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000072 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000073 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000074 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000075 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000076 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000077 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000078 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000079 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000007A System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000007B System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000007C System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000007D System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000007E System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000007F System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000080 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000081 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000082 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000083 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000084 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000085 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000086 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000087 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000008E System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000091 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000092 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000093 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000094 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000095 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000096 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000097 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000098 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000099 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000009A System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000009C System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000009F System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A0 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A1 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000A3 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000A4 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000A6 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000A7 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000A8 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000A9 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AA System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[170] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[170] = 
{
	2846,
	2941,
	2941,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[57] = 
{
	{ 0x02000004, { 89, 4 } },
	{ 0x02000005, { 93, 9 } },
	{ 0x02000006, { 104, 7 } },
	{ 0x02000007, { 113, 10 } },
	{ 0x02000008, { 125, 11 } },
	{ 0x02000009, { 139, 9 } },
	{ 0x0200000A, { 151, 12 } },
	{ 0x0200000B, { 166, 9 } },
	{ 0x0200000C, { 175, 1 } },
	{ 0x0200000D, { 176, 2 } },
	{ 0x0200000E, { 178, 8 } },
	{ 0x0200000F, { 186, 6 } },
	{ 0x02000010, { 192, 2 } },
	{ 0x02000011, { 194, 4 } },
	{ 0x02000012, { 198, 3 } },
	{ 0x02000014, { 201, 3 } },
	{ 0x02000015, { 206, 5 } },
	{ 0x02000016, { 211, 7 } },
	{ 0x02000017, { 218, 3 } },
	{ 0x02000018, { 221, 7 } },
	{ 0x02000019, { 228, 4 } },
	{ 0x0200001A, { 232, 34 } },
	{ 0x0200001C, { 266, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 1 } },
	{ 0x06000007, { 21, 2 } },
	{ 0x06000008, { 23, 5 } },
	{ 0x06000009, { 28, 5 } },
	{ 0x0600000A, { 33, 1 } },
	{ 0x0600000B, { 34, 2 } },
	{ 0x0600000C, { 36, 2 } },
	{ 0x0600000D, { 38, 1 } },
	{ 0x0600000E, { 39, 3 } },
	{ 0x0600000F, { 42, 2 } },
	{ 0x06000010, { 44, 3 } },
	{ 0x06000011, { 47, 7 } },
	{ 0x06000012, { 54, 2 } },
	{ 0x06000013, { 56, 2 } },
	{ 0x06000014, { 58, 4 } },
	{ 0x06000015, { 62, 3 } },
	{ 0x06000016, { 65, 4 } },
	{ 0x06000017, { 69, 3 } },
	{ 0x06000018, { 72, 1 } },
	{ 0x06000019, { 73, 1 } },
	{ 0x0600001A, { 74, 3 } },
	{ 0x0600001B, { 77, 2 } },
	{ 0x0600001C, { 79, 2 } },
	{ 0x0600001D, { 81, 5 } },
	{ 0x0600001E, { 86, 3 } },
	{ 0x0600002E, { 102, 2 } },
	{ 0x06000033, { 111, 2 } },
	{ 0x06000038, { 123, 2 } },
	{ 0x0600003E, { 136, 3 } },
	{ 0x06000043, { 148, 3 } },
	{ 0x06000048, { 163, 3 } },
	{ 0x06000072, { 204, 2 } },
};
extern const uint32_t g_rgctx_Iterator_1_t636279D5C9025C29159E9C0F450D35FFAC93279B;
extern const uint32_t g_rgctx_Iterator_1_Where_m0335429642E75AAECFBE3A2FFB3E69C0902CD0D0;
extern const uint32_t g_rgctx_TSourceU5BU5D_tB85C233E707A0361D6D93CC945959A97B295E668;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t78D2E4CACFC7E7EF98F4400F475AA11085112BAB;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m14EFDE07937A9AD4F82AC1A74EB288C173BFB848;
extern const uint32_t g_rgctx_List_1_tE71B82DE094FF5C3CFC4CEB615B5DF14BD949490;
extern const uint32_t g_rgctx_WhereListIterator_1_tFF147832A53F8A9DE165473807DDCFD3CC89BB27;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m486D06E9DF259E0447D58D5862CD621A244EC394;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tD45416FF1F026DC4A566886D1F9A85298AE985EE;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m728988B0E986DD25EA1A1245D615A4D8C365CD58;
extern const uint32_t g_rgctx_Iterator_1_tC2E699D86C01BAC6905B98B63B33736C033E71D1;
extern const uint32_t g_rgctx_Iterator_1_Select_TisTResult_tEC92E99E2F99696D564F9F0BF815FEF3CB5ADB24_m0D623474504357AC2390442FA49A3614816C30EB;
extern const uint32_t g_rgctx_TSourceU5BU5D_t4F9441DF0F8CE638F5AE03184356E2547BE07D8B;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t2180864D420574607DB2234C9C01679FE54D8CE0;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_mDD41DB7136FC0D1BAAD6387FDF1CD6AB89DAAFAA;
extern const uint32_t g_rgctx_List_1_t4845168BC8478686CF2BBE4464D2DAFF823D0084;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_tD8B9E9B726B2A13391A120779B663B6B066FE46C;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mAEBB72130A83942691D7AD550E95275A4568F008;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_tAF002CEC5D0A77CDB9D819FDC46DD0BA58C1BBA6;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m6B03D41394EC2F95D12611A98B59B9216388D808;
extern const uint32_t g_rgctx_Enumerable_SelectIterator_TisTSource_t0CE1961451302A986C2181CA3A38F9E4A88506AC_TisTResult_t62F650E7633107B230BBBBAAD2A15B90F686A239_mB209472909ACCC455F89617253D49680DC2708C0;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_tC50DFF100B9887CE1C160E3068A7C4C0F343B8B3;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_m8F569DD9259B8E0FDA60E14C33B576914048B8FA;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_tAAE11763AA13976D45FD650D42F519700CF99D38;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m86EDAA3687D7C1F88D7F2948EB133CD52D1F67B4;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m6AC677496E624733DBE45B58781535FBE0676A8B;
extern const uint32_t g_rgctx_Func_2_tBBA43EC3AE1D3C51038FD479D6428C8DD30B04E6;
extern const uint32_t g_rgctx_Func_2__ctor_m3DFE5D5406D3378215342C16ED24C3A1E0E779E2;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_t0683908CF809AD10ED7CC6D62163918C9696939B;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_m457EDCE9B47108492ADD67B0A9810080E39D1BE2;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_m3345F80CF52FB25D5B643E53940EC65D4DE624FF;
extern const uint32_t g_rgctx_Func_2_tD04771F273735C559AE55788BC543AC64480CCE3;
extern const uint32_t g_rgctx_Func_2__ctor_m5A1DFF0655E17E626732D3F1D7121D991CDB0179;
extern const uint32_t g_rgctx_Enumerable_TakeIterator_TisTSource_tF3366CFD4DCD52902E2CE09433D6FD7735E2D98E_m295BA530E891866CE107E18EDFCE5C61D68BD697;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_t4C8C0490AF33B4114CC11E8F75A4C1C49A86AA20;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1__ctor_m0B3BE357A393886A01224F0B9AD836C26C630F52;
extern const uint32_t g_rgctx_OrderedEnumerable_2_t015D762D3F1278F3A8095CC482498F0C833B0984;
extern const uint32_t g_rgctx_OrderedEnumerable_2__ctor_m45A55EB5FF2CE3D2BDF45E1B690EF35E0D5DE727;
extern const uint32_t g_rgctx_IOrderedEnumerable_1_CreateOrderedEnumerable_TisTKey_t02D36AA7EBCABE787524643443A1C180EB801194_m19CC62B5F0A74905DBA2306241A5677B42E07BB6;
extern const uint32_t g_rgctx_Buffer_1_tC5729D25A3E364254D0A1FCE4E06925DD5747329;
extern const uint32_t g_rgctx_Buffer_1__ctor_m222E095AE1BB3A973DDD54EF9E1B4D5B736CCD17;
extern const uint32_t g_rgctx_Buffer_1_ToArray_mC3E5B9F0AEC815A68ACDD77645E6B71FF4075C1D;
extern const uint32_t g_rgctx_List_1_tF50400EBC15D6DEEC3C43073E29EA18AE57314CC;
extern const uint32_t g_rgctx_List_1__ctor_m1AF07A5AAF7431D4835996D42244831EF686194F;
extern const uint32_t g_rgctx_IdentityFunction_1_get_Instance_mBD1034869883E9F64549214692515F574F892992;
extern const uint32_t g_rgctx_IdentityFunction_1_tB8731DF771301F75148D0E6BCB44C144327A08BC;
extern const uint32_t g_rgctx_Enumerable_ToDictionary_TisTSource_t2DB165C77D5A15C3655DD54335B6AE644D2D72B0_TisTKey_t5EF66CD775DA268D4018C30A568CE59CF5210B91_TisTSource_t2DB165C77D5A15C3655DD54335B6AE644D2D72B0_m06E92CFEB11D6BF383D6FF9A36D50B0FC0D4331A;
extern const uint32_t g_rgctx_Dictionary_2_t4493E1FD07BF64FFF852549818E1A30F659F9A65;
extern const uint32_t g_rgctx_Dictionary_2__ctor_mD41414684F251E23FD44D934A1945B01AD6AD9A2;
extern const uint32_t g_rgctx_IEnumerable_1_tCA075AB376DFE408D8AC0126F02F6DC6572D8BAF;
extern const uint32_t g_rgctx_IEnumerator_1_t9881C285459458035F332F77470133CE23395912;
extern const uint32_t g_rgctx_Func_2_Invoke_mDE2993D7792ED60CE6B2615F06D9A309722B6036;
extern const uint32_t g_rgctx_Func_2_Invoke_m0C49A8E0C74B4F1C9482029D070F346D4B3D41F3;
extern const uint32_t g_rgctx_Dictionary_2_Add_mCA6DDF4DD83D83BA22FD47B269C8571F5DEC1AA0;
extern const uint32_t g_rgctx_IEnumerable_1_tF59FD6141765ACD213B1549632973FF126A303FC;
extern const uint32_t g_rgctx_Enumerable_CastIterator_TisTResult_tC93DE6141C2AEDF5EB4A8227F077C88E3B78F3F6_m73F787DBA179CBED0E0866C5672C67F58D90D887;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_t59E9AD4ED6ED0E5731D5B3CABCC2584628B1E213;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1__ctor_m8D18A4B714A8C323626C7849EB8EA3E9D88931C0;
extern const uint32_t g_rgctx_IList_1_tCAC22142D45D9B5BEDC0EC4316FB0787780E59C0;
extern const uint32_t g_rgctx_ICollection_1_t304709A63D159EB9956CBC8F5384C8DC17DAB944;
extern const uint32_t g_rgctx_IEnumerable_1_t3EEB6E917754CC0F2D884B5BAF09F79D06A23371;
extern const uint32_t g_rgctx_IEnumerator_1_t3443F0B85E56B92C25A45DC489F4E78C696B382A;
extern const uint32_t g_rgctx_IEnumerable_1_t8DB477F20651176E75D2BCAEDF981D633D80CD34;
extern const uint32_t g_rgctx_IEnumerator_1_t4B7E760977A64E74AB1647667A03A3AC39E9537F;
extern const uint32_t g_rgctx_Func_2_Invoke_m9A695867B12FDC2909EE58D3C12974290AC63570;
extern const uint32_t g_rgctx_IList_1_t9B2C39DD1935C0159FB061115AF5530046049F74;
extern const uint32_t g_rgctx_ICollection_1_t35B5CBD8B2D72DA7EC88941F6C85DA6146A26DAB;
extern const uint32_t g_rgctx_IEnumerable_1_t5586386B55A509E36FD800F6EAAE2C2F1A01CBEB;
extern const uint32_t g_rgctx_IEnumerator_1_tD60C4749BBF149AB239D1DED16B258BCBD0E5F8F;
extern const uint32_t g_rgctx_IEnumerable_1_tD0880E4FF3F8B3DBC95295C115964852F4006BDE;
extern const uint32_t g_rgctx_IEnumerator_1_t2BDF305126D656BD2B3734A2BA28F10607A82074;
extern const uint32_t g_rgctx_Func_2_Invoke_mE9A75A107233FECEE19A1C1E3AC7D3819565F736;
extern const uint32_t g_rgctx_EmptyEnumerable_1_t461C324301407FD7CF00125C74C7BBB10E425032;
extern const uint32_t g_rgctx_IEnumerable_1_t6B558838B603B0E97AFA74C50F667305BDC94859;
extern const uint32_t g_rgctx_IEnumerable_1_tA56BDC4BCA945A181D326F97ACDDB3A23C56D75F;
extern const uint32_t g_rgctx_IEnumerator_1_t71577311A5349A81219A3AAA87F5D7C87441334D;
extern const uint32_t g_rgctx_Func_2_Invoke_m22BF94126E79C0060E291A3973838BE70CBE99EF;
extern const uint32_t g_rgctx_ICollection_1_t401C1362FA9CAA778DB957CA35F29F955A470D4D;
extern const uint32_t g_rgctx_IEnumerable_1_t0AA8DC1E145B18DB5BB6E9E999383C3368225353;
extern const uint32_t g_rgctx_ICollection_1_t12A52A64081A5954F5F3EA1E13DAF2587E8C57DE;
extern const uint32_t g_rgctx_Enumerable_Contains_TisTSource_t941CC4C3B89ECA76D1FAFE3BC385974F6C8372B2_m7B5F33A4BBBBE98861FC9B38AEE5090109400C8C;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m0DD948D8CCA4C1DA30E417512F50E4F463CFEBC2;
extern const uint32_t g_rgctx_EqualityComparer_1_tC54E5776F429F385C6E93384568ABC1174A92F62;
extern const uint32_t g_rgctx_IEnumerable_1_t1C203359ED16BCC43AC4805C465D8D500686ADA8;
extern const uint32_t g_rgctx_IEnumerator_1_t102BE58A70A4033CB1BCB8B4D26DFB372CE314D2;
extern const uint32_t g_rgctx_IEqualityComparer_1_t0F97F8650BAFC726D27A22B8B8478C2C7DC2B103;
extern const uint32_t g_rgctx_IEnumerable_1_t257489EBBACE672F8500A07CFCC31FEFCF92B2E3;
extern const uint32_t g_rgctx_IEnumerator_1_t89A541F99BCB0EEBEE67D723FB72C674454DB1B7;
extern const uint32_t g_rgctx_Func_3_Invoke_m84E0FE77597D3D417ABD382368120410E981B800;
extern const uint32_t g_rgctx_Iterator_1_Clone_m16088BFE7F81DDE461A0BB4E1EA29363B7201A88;
extern const uint32_t g_rgctx_Iterator_1_get_Current_mBBDFA8B8A3ABB39089FBAAFB585F74B0645D5B9E;
extern const uint32_t g_rgctx_TSource_tE27C213B5C79D15F8C95F178F87A749A817CDA5D;
extern const uint32_t g_rgctx_Iterator_1_GetEnumerator_m13277F825C4179EF9CDE7A56336BA548EBDD8B66;
extern const uint32_t g_rgctx_Iterator_1__ctor_m7514E41D23F3DE4CFB867A3D46DFA8B2501AE00A;
extern const uint32_t g_rgctx_Iterator_1_t50B70FACDE0E1B34143E9F8CD22ACA0B10FEEC26;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tE5D85FF692C59EBD4579D71A361979792364C8C2;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mB813B1FE2E20D2DF6F0FAB6A3038EF326256668F;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m458FCA659FADA5A1CDD35B01DC76E07FC79011F6;
extern const uint32_t g_rgctx_IEnumerable_1_t014A3E7CE41868FE585432BE1E1F32DAF551BB36;
extern const uint32_t g_rgctx_IEnumerator_1_t540613216E99A3140BFFB2141072CF8D8C55007A;
extern const uint32_t g_rgctx_Func_2_Invoke_m9F7D28A9D6156DF8A1B912FFA0F747CFDBFC8D85;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_t925AD170B396F364902F7FA31791C320095C54E5_m204DB79421EDD3974CD0BFE16F7EF7B4FA48F1EA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t46C994A1424EC5EF082C585BBB32C2AD1D3D4CB3;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m08367FB68BE2F5519F0A182BD80B2D4F7424C917;
extern const uint32_t g_rgctx_Iterator_1__ctor_m26CBEC6F3738C13265ED9A1DB94EAA482E5EEA40;
extern const uint32_t g_rgctx_Iterator_1_tDCC95199B9B0AE888166B600A2150724F5886269;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t20BBB4A170F4320F138F207A6EBFB6C88FA8C6A1;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m035206C0A4EEE229CD66670619A7BDC8DDE59F9F;
extern const uint32_t g_rgctx_Func_2_Invoke_m8E3DE59DA6A8AE4BCFAA34FA8B17B381A99D11AE;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mBF633E0AC48DC442C116F953FC60AFF40436CEA9;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_t78A097556235CA68272579A40AC9ABEE8E6228C8_mE267EE8715DC4D0B54E4FFA4137132863C8C05D5;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_tF7F044DA24DECBE0E5A6AE433108FE4E8268155F;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m075E1384C767F3300E3B2B6BAE298A12DB74F92F;
extern const uint32_t g_rgctx_Iterator_1__ctor_mCC9DED6DA7E9DD65B1EF6F217D5806777C1C1C85;
extern const uint32_t g_rgctx_Iterator_1_t46EC0822C64AE0439F8EE76EB5155C7A9001F557;
extern const uint32_t g_rgctx_WhereListIterator_1_tADF109EE7959D1951D59B9C41E18BD70E5441BB9;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m9002AB02279AE8B262F8BAAA95BE527B987ED958;
extern const uint32_t g_rgctx_List_1_GetEnumerator_mAFED2F8101B027035699A20B4805B534C316344E;
extern const uint32_t g_rgctx_Enumerator_get_Current_mE985AB113BB4586F6450A4754514B631705E7065;
extern const uint32_t g_rgctx_Func_2_Invoke_m91A41D91BF9C53B5FCB823CEC4C05441E7358252;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mD2B6AE94B197322F4771CD14316E0B95B8D82E64;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mBCB5A059BDA76FBC39499E43B3D8BB751ECA6373;
extern const uint32_t g_rgctx_Enumerable_CombinePredicates_TisTSource_tD1ACF1646AF878DBE965885289D74649B3B828A3_m88595760E15A41A2E59213D4FBDF33DC3A92E7E6;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t8A71567888F15A3623F26A2EB610FC3763B9FF64;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_mCDDF6695E39D352EBF7D6737D08A17681DDBA0EB;
extern const uint32_t g_rgctx_Iterator_1__ctor_m9C015AF4A450B4E6EB725D0A6EA193EC87089916;
extern const uint32_t g_rgctx_Iterator_1_t4A1A94CD1362426652FE8007391D7ACD149C3CAA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t7031169C0E37784A65AB4F5B17C5BF181037AF67;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_mBCA01725B4D027EBDD90FF78834AF3D2322B97CD;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m9F3180789FE400C31D35F9F6D743AC390A0261D1;
extern const uint32_t g_rgctx_IEnumerable_1_t59F6FB0A645176EC2A74EFC6A6954B6A0BD8613E;
extern const uint32_t g_rgctx_IEnumerator_1_tC005608F0795FDFDD43CF49AD0A68249E3CF1555;
extern const uint32_t g_rgctx_Func_2_Invoke_m80421D41060FA82A34CE13118BDD3A56276FFEC8;
extern const uint32_t g_rgctx_Func_2_Invoke_m03A1520007AD7AA7EB571079CEEBEA13E126518D;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tFF7F615E8575AD96233222E6633A1C896E1BF3FE;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m5411CF60E5F86BF7F54AFBD1E0C95C9688B29B92;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_tC2E77D7EA4AE607508C03DFA1362450D1DB1A2C4_TisTResult_t3163C282AB187D44EE2308497F3395E3287C66FD_TisTResult2_tFB17268A1DEC3B455218E8232DBF56A873701CCE_mA318522BDC6EBB841C57419082205164CCD9F44A;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2_t3E5F5CEC2B587397A95F9C132A4E93577A0E9EFA;
extern const uint32_t g_rgctx_WhereSelectEnumerableIterator_2__ctor_m5DC380D132EC785F06988E5FD0D09A247B0DF032;
extern const uint32_t g_rgctx_Iterator_1__ctor_m14C0DC72B8DD1FC0A32BA34CC7E04FF3106D72B8;
extern const uint32_t g_rgctx_Iterator_1_t8CC8E16A7609A1CB8D299492A8EA1452111C811D;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_tC23CA6F5F16345355F547FF9E1F2156DCD628787;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_m892A5BC3C31E7332525AE5D21A1138941C2B6DE2;
extern const uint32_t g_rgctx_Func_2_Invoke_mD9083CFC73A356C4CB6A92B62C096336829907FC;
extern const uint32_t g_rgctx_Func_2_Invoke_m5945185BD815F2681A769EACBE3C582FA97CB508;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m5EC8CEF99E23E398528FE0931DCC45AED3BEBF32;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tE2CE3763D78D5CC8F4AC63AFE78B1CBD23278F43;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m86D1FEB4F9AACB36F8538594B7B38AC89E7ECB80;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t6355F355A254894D36425000DA970098D26F6EF5_TisTResult_tD6A3EE7D4ACD5F7F9E7DB9F00F3C5CC598B55E0B_TisTResult2_tFB11D70CFC9A6D39CD2859C8E269998B71091CE7_m39F57864AB4D3B8C44CEC60B4BB6810ACC474BA4;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2_t738B3298CEC205A75135CED719B96FDCB3E19DB8;
extern const uint32_t g_rgctx_WhereSelectArrayIterator_2__ctor_mCC0D6C5D6838B379F2E5934F6166D00E0D30D61F;
extern const uint32_t g_rgctx_Iterator_1__ctor_mB57E6479A26693AC3E3228153DF5C3FF9244E556;
extern const uint32_t g_rgctx_Iterator_1_t82B5A713AD6A0AEEA492B6EDD94AB36C177FB31E;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t729D3E7AAD664CE67089CB48A807AC3E9301DD45;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m4243EB70AC53128B69B768C753E22F06EC6C2F95;
extern const uint32_t g_rgctx_List_1_GetEnumerator_mABC2F0913AC1FB53A0A06DE4F593B0A59BC3014C;
extern const uint32_t g_rgctx_Enumerator_get_Current_mFB62C9BD7171865F3CFC87C8311E2C462791ACA0;
extern const uint32_t g_rgctx_Func_2_Invoke_m27C03DB3F8030B00F631ADE2CD1A9DDF18D5ED23;
extern const uint32_t g_rgctx_Func_2_Invoke_mE86C4D09C2F79FDFB4EA23E08D328E5EEAEC9639;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m5C1C72BBB604DBBCBC5F0B6A885FB61372D4CA65;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m131C1D6FE9A3EF2550ADE8B2F01ED31A4B4CD89E;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_tF93BB76CC2E74178734ACB7F539BF5F5781032CC;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m5598588FA12141BFE352C9917F5398566B7074BB;
extern const uint32_t g_rgctx_Enumerable_CombineSelectors_TisTSource_t35717B0D8465F7BF2FF374E22BFDE014E9CCAB7B_TisTResult_tEC155615E1838A087179B679DA38A5AB1DCB49F6_TisTResult2_t90E635D774BCB207895EA3440CF7DA243ADF7314_m243CCC2FD2B5576E0648150487553604A7579102;
extern const uint32_t g_rgctx_WhereSelectListIterator_2_t6461584B4A18CBB697BC8E65661BD2EDC3144F29;
extern const uint32_t g_rgctx_WhereSelectListIterator_2__ctor_m0CABE000C6C9936C0A0DCBDAB0CE517E636F36F7;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_U3CU3Em__Finally1_m050074DB4F51F52D574D9B5115CFB040BA65DA78;
extern const uint32_t g_rgctx_IEnumerable_1_t6E240FDBB7ED1FE44B014C0FB35971DCEC84855C;
extern const uint32_t g_rgctx_IEnumerator_1_t7FE10D42ADED2F3E416BAE4BFD911DF152208300;
extern const uint32_t g_rgctx_Func_3_Invoke_m99BD7C0BDB6DECB7E2C6559454B90DD9939A4D77;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_System_IDisposable_Dispose_m0220A1C8F1FA9BEEB6A18C6273D18BEC91B555FD;
extern const uint32_t g_rgctx_TResult_tDDEB83A02E7DDB0E932B2B5A5DA8D474276144AE;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_tF3302E53A050DEEB7F14179F368DC824E31AF270;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_mDF2E3C83A960DC08B38464BBD9BBA55F2F4F3BD4;
extern const uint32_t g_rgctx_U3CSelectIteratorU3Ed__5_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mE1AFD48D99037F90008FBB0EFB8EFC688EB6BD45;
extern const uint32_t g_rgctx_Func_2_Invoke_m9A6744C087A6AC603C2858E37C8EB93CC6694884;
extern const uint32_t g_rgctx_Func_2_Invoke_mAC80E45654022092175F6F9E4FF0BF5987266C9C;
extern const uint32_t g_rgctx_Func_2_Invoke_m6633A2B4AF28FAD626AC68367C19680E515B512B;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_U3CU3Em__Finally1_m176ABA9BF1EA498EA2F2F01E0743A5538DDCFD13;
extern const uint32_t g_rgctx_IEnumerable_1_tFDB4CD57E31B1A3A65CDEBC3787B908266388742;
extern const uint32_t g_rgctx_IEnumerator_1_t4E545E145CBECE5B499444F9E732D80FC5911E4E;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_System_IDisposable_Dispose_m81DE20DFA4A3A4BBE4D0FF97F703B95CE41E5D94;
extern const uint32_t g_rgctx_TSource_t768AD0D4D2D29E0079C31B83410396711C26DC64;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_tD155B0BA81CE6333AB2D82709BA9143DC355FC6A;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1__ctor_mCC56FA4F2D409DCF46F2CE4512581053196E0A7B;
extern const uint32_t g_rgctx_U3CTakeIteratorU3Ed__25_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m6496161F40BE26EE1B6D17A6C4C1EA33E12D0C48;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_U3CU3Em__Finally1_mC129119E0A90CB46153DD4572867704D6ADF409F;
extern const uint32_t g_rgctx_TResult_t38C007C48B3FA701E32A0AF5BE0BAD85E956EF72;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_System_IDisposable_Dispose_mAEC71DE7E22F62888CE0BDCFF3C1BD0E3EDCBEA2;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_tC93EDEE882C4795DFD12C2F1FBC1A393FCD95FC5;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1__ctor_mF29AEAAA369B61DB8F949A6709C64EABD5DB4E91;
extern const uint32_t g_rgctx_U3CCastIteratorU3Ed__99_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m48201A9A5653132CF44527C305D8AD94A21B4A49;
extern const uint32_t g_rgctx_TElementU5BU5D_t8A94C4BFBF9E6BF79B51985125A00CE6111046BD;
extern const uint32_t g_rgctx_EmptyEnumerable_1_t61D763760D8F245D25A64A37EA22E49B6A61D33F;
extern const uint32_t g_rgctx_U3CU3Ec_t7E02E403CA9127A9E60A070AC6D66CC5D5919ADF;
extern const uint32_t g_rgctx_U3CU3Ec_U3Cget_InstanceU3Eb__1_0_mA24100AAA0DA5F4EA14A51A50CDEE9290F87359D;
extern const uint32_t g_rgctx_Func_2_tD96FE9EE31E42E3126747DE11110BC8F62D6D2F4;
extern const uint32_t g_rgctx_Func_2__ctor_m68577F978A4FEF7E046AB64788F58B063ABDEB11;
extern const uint32_t g_rgctx_U3CU3Ec_tC00A4A5657B028F9EE81F26B21502944BABB33D1;
extern const uint32_t g_rgctx_U3CU3Ec__ctor_m9F59EC7929C1D1080EFF3EEF94384EF4AA298512;
extern const uint32_t g_rgctx_U3CU3Ec_tC00A4A5657B028F9EE81F26B21502944BABB33D1;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__1_t5D0486AEAB09755AF78B220EFA015EA86540C4B3;
extern const uint32_t g_rgctx_U3CGetEnumeratorU3Ed__1__ctor_mD7AD8598EA220AE5C3472A7151BCEB208DA7F24F;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerator_m6DF22CD2A54FD98EE9BC3A07367C286B21F9547B;
extern const uint32_t g_rgctx_OrderedEnumerable_2_t2A47D4856AECFE1685BCA5481E27661F13EE1417;
extern const uint32_t g_rgctx_OrderedEnumerable_2__ctor_mD264D38202D3B90E502FDE99A254815B45B4BA65;
extern const uint32_t g_rgctx_Buffer_1_t7BF1A786B9BDA7D98997098F206D9FBEB8E805CE;
extern const uint32_t g_rgctx_Buffer_1__ctor_m63F874F7E854E3962714E8472CB132C035CC416B;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_m66C26D4385449EA5B7AC0AAAE558E827A547B8CF;
extern const uint32_t g_rgctx_EnumerableSorter_1_Sort_m02DC1D19B109171CC6F0A97CA1A3A494A2F08F31;
extern const uint32_t g_rgctx_TElement_t333B92C559EDB1DAA4DB3278851F903367748A99;
extern const uint32_t g_rgctx_OrderedEnumerable_1__ctor_mE30DC877F0F5D6F8AC240D104550276A35B6852C;
extern const uint32_t g_rgctx_OrderedEnumerable_1_t50B50FFBA4235D6A79D0BD205B625DE23059AB4A;
extern const uint32_t g_rgctx_Comparer_1_get_Default_m9E7E2CD7BBA500D9A9731C5906809FCBA65E1E30;
extern const uint32_t g_rgctx_Comparer_1_tD0DB8DA2AE74C852F854EA8D9376FBD40626907C;
extern const uint32_t g_rgctx_EnumerableSorter_2_t2CEA9D5447B2F9F77A2272EFB103B886DA6A1420;
extern const uint32_t g_rgctx_EnumerableSorter_2__ctor_m100971C016BC2A43E309CE5E2D698B9D1588B033;
extern const uint32_t g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_mA88206BAC41B269377165C986FA5703FE0D98BF1;
extern const uint32_t g_rgctx_EnumerableSorter_1_ComputeKeys_m83D519A95C8BF3E64F4C001F694C1BA6B5AAA627;
extern const uint32_t g_rgctx_EnumerableSorter_1_QuickSort_m1624C8412F34C475233B33FFFB9B72B17B8AB15F;
extern const uint32_t g_rgctx_EnumerableSorter_1_CompareKeys_m97F1B0F4295DCEC1F4D25AA1460D635ABDB083D7;
extern const uint32_t g_rgctx_EnumerableSorter_1__ctor_mCF1F7D79B54CC4982ACC920B5FC4820B6761D497;
extern const uint32_t g_rgctx_EnumerableSorter_1_tD898552BB1412C8F871ECEF9E1E52EB11D1D9433;
extern const uint32_t g_rgctx_TKeyU5BU5D_t6537368C948F1BE34C63755A2D32DD5D17382867;
extern const uint32_t g_rgctx_Func_2_Invoke_m5B02612CC97C4353D26D2A468F97D6FF5F3BFFA8;
extern const uint32_t g_rgctx_EnumerableSorter_1_ComputeKeys_m0E1B75812073569AF348E2322C90C5326D95A0BC;
extern const uint32_t g_rgctx_IComparer_1_t885D3AAA10BAAD12BD427225987B0FD222695EBA;
extern const uint32_t g_rgctx_EnumerableSorter_1_CompareKeys_m4A804932C38687AA4E0B8569DB03D36A04BBEE46;
extern const uint32_t g_rgctx_ICollection_1_t7C426FF7559846CA5118EB7658EEC1A091C8D99B;
extern const uint32_t g_rgctx_TElementU5BU5D_t7794BEA974AC676D685D83352F37C7ADBF84BD60;
extern const uint32_t g_rgctx_IEnumerable_1_tD73EF5A715E0D735FB8796582DF7DAAE59248A28;
extern const uint32_t g_rgctx_IEnumerator_1_t721019D94B9F297B40CA782A203E918DCEF86D3E;
extern const uint32_t g_rgctx_EqualityComparer_1_get_Default_m0E4BF9A3FBB72E07033EA16B23935DD2A753BE7E;
extern const uint32_t g_rgctx_EqualityComparer_1_t57E7B5874DDB8ED0BBCF9EA1E8EE5E482DB475BF;
extern const uint32_t g_rgctx_HashSet_1__ctor_m59687428EFF3A060C7E4A58B33D8CCB1866245DB;
extern const uint32_t g_rgctx_HashSet_1__ctor_m9B732C5C36D11AAEFABF7CEC13EDFF253C50A64D;
extern const uint32_t g_rgctx_HashSet_1_t3EA44E3F056CFAC7C7F285264896055E1059D328;
extern const uint32_t g_rgctx_HashSet_1_AreEqualityComparersEqual_m58983B4575A37B747D2D07FDCBB7C63D16D601BC;
extern const uint32_t g_rgctx_HashSet_1_t3EA44E3F056CFAC7C7F285264896055E1059D328;
extern const uint32_t g_rgctx_HashSet_1_CopyFrom_m96F2513C029CF917546FD4A8EDFF667539B528BD;
extern const uint32_t g_rgctx_ICollection_1_tB68883F0155714DC8456B3030A8B6D79432B214F;
extern const uint32_t g_rgctx_HashSet_1_Initialize_m388A18FBF12F617107200961B7E4736E2B032820;
extern const uint32_t g_rgctx_HashSet_1_UnionWith_mF3EE8BDDCB380567655AE83AA914CEBA69B92308;
extern const uint32_t g_rgctx_HashSet_1_TrimExcess_mEFE2B4AAE58BB50B40FAC84540B4EF632713E197;
extern const uint32_t g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C;
extern const uint32_t g_rgctx_HashSet_1_AddValue_m601C62BF19E00BFC28BF9E7EF8DEF0FDF5B69C23;
extern const uint32_t g_rgctx_HashSet_1_AddIfNotPresent_mD32BD7F09DDC0123D28A33C4E91499817AEBDE5A;
extern const uint32_t g_rgctx_HashSet_1_InternalGetHashCode_mDF2E29D60C603DBF5BE68A3DAD153D124902A38D;
extern const uint32_t g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m2CEA36CE0A9828B0D2817BABB0778E9B7CC2D23B;
extern const uint32_t g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_tFA70BB9403614A86785198F7670E8A79579D96AA_mE4CF1DE156A56C76F3D17E5D356B4592BF76045B;
extern const uint32_t g_rgctx_Enumerator_t3B01BF569E0DDC9775F15A857D58FB5891FF9794;
extern const uint32_t g_rgctx_Enumerator__ctor_mF6352008F027267A6D46E84C5EE5A593C2008B31;
extern const uint32_t g_rgctx_IComparer_1_tAC617197608B3A3B8581D014191E97687ACBDC73;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_HashSet_1_CopyTo_m3C429D78A2E5EB4297C0E1913DB8D3E719AF41E9;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357;
extern const uint32_t g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C;
extern const uint32_t g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1;
extern const uint32_t g_rgctx_IEnumerable_1_t8524277609871504BAA6201A8229336029777E46;
extern const uint32_t g_rgctx_IEnumerator_1_t9A7C0233E00E7973685F97271E6352DFDE72107B;
extern const uint32_t g_rgctx_HashSet_1_SetCapacity_mA30C348AE8DA2CB53D157195B16A8EF0AF88F810;
extern const uint32_t g_rgctx_HashSet_1_IncreaseCapacity_mA3287035E39B231BF0B2B4CDEFA182530F54F0DB;
extern const uint32_t g_rgctx_HashSet_1_get_Comparer_mD071150836E79AA358BC57DA040ED915A7051CCF;
extern const uint32_t g_rgctx_T_tFA70BB9403614A86785198F7670E8A79579D96AA;
extern const uint32_t g_rgctx_Enumerator_get_Current_m5AF8DAD51CCB7D8472437E484EE9ECA33FACD0C8;
extern const uint32_t g_rgctx_T_t915F5DD3D2E812A343EBC3FB68983028184D4B2A;
static const Il2CppRGCTXDefinition s_rgctxValues[268] = 
{
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t636279D5C9025C29159E9C0F450D35FFAC93279B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Where_m0335429642E75AAECFBE3A2FFB3E69C0902CD0D0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSourceU5BU5D_tB85C233E707A0361D6D93CC945959A97B295E668 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1_t78D2E4CACFC7E7EF98F4400F475AA11085112BAB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1__ctor_m14EFDE07937A9AD4F82AC1A74EB288C173BFB848 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_tE71B82DE094FF5C3CFC4CEB615B5DF14BD949490 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1_tFF147832A53F8A9DE165473807DDCFD3CC89BB27 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1__ctor_m486D06E9DF259E0447D58D5862CD621A244EC394 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tD45416FF1F026DC4A566886D1F9A85298AE985EE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m728988B0E986DD25EA1A1245D615A4D8C365CD58 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_tC2E699D86C01BAC6905B98B63B33736C033E71D1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Select_TisTResult_tEC92E99E2F99696D564F9F0BF815FEF3CB5ADB24_m0D623474504357AC2390442FA49A3614816C30EB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSourceU5BU5D_t4F9441DF0F8CE638F5AE03184356E2547BE07D8B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_t2180864D420574607DB2234C9C01679FE54D8CE0 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_mDD41DB7136FC0D1BAAD6387FDF1CD6AB89DAAFAA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_t4845168BC8478686CF2BBE4464D2DAFF823D0084 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_tD8B9E9B726B2A13391A120779B663B6B066FE46C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_mAEBB72130A83942691D7AD550E95275A4568F008 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_tAF002CEC5D0A77CDB9D819FDC46DD0BA58C1BBA6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m6B03D41394EC2F95D12611A98B59B9216388D808 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_SelectIterator_TisTSource_t0CE1961451302A986C2181CA3A38F9E4A88506AC_TisTResult_t62F650E7633107B230BBBBAAD2A15B90F686A239_mB209472909ACCC455F89617253D49680DC2708C0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_tC50DFF100B9887CE1C160E3068A7C4C0F343B8B3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_m8F569DD9259B8E0FDA60E14C33B576914048B8FA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_tAAE11763AA13976D45FD650D42F519700CF99D38 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1__ctor_m86EDAA3687D7C1F88D7F2948EB133CD52D1F67B4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass6_0_1_U3CCombinePredicatesU3Eb__0_m6AC677496E624733DBE45B58781535FBE0676A8B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_tBBA43EC3AE1D3C51038FD479D6428C8DD30B04E6 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2__ctor_m3DFE5D5406D3378215342C16ED24C3A1E0E779E2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_t0683908CF809AD10ED7CC6D62163918C9696939B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3__ctor_m457EDCE9B47108492ADD67B0A9810080E39D1BE2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__DisplayClass7_0_3_U3CCombineSelectorsU3Eb__0_m3345F80CF52FB25D5B643E53940EC65D4DE624FF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_tD04771F273735C559AE55788BC543AC64480CCE3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2__ctor_m5A1DFF0655E17E626732D3F1D7121D991CDB0179 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_TakeIterator_TisTSource_tF3366CFD4DCD52902E2CE09433D6FD7735E2D98E_m295BA530E891866CE107E18EDFCE5C61D68BD697 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_t4C8C0490AF33B4114CC11E8F75A4C1C49A86AA20 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1__ctor_m0B3BE357A393886A01224F0B9AD836C26C630F52 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_2_t015D762D3F1278F3A8095CC482498F0C833B0984 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_2__ctor_m45A55EB5FF2CE3D2BDF45E1B690EF35E0D5DE727 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IOrderedEnumerable_1_CreateOrderedEnumerable_TisTKey_t02D36AA7EBCABE787524643443A1C180EB801194_m19CC62B5F0A74905DBA2306241A5677B42E07BB6 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_tC5729D25A3E364254D0A1FCE4E06925DD5747329 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1__ctor_m222E095AE1BB3A973DDD54EF9E1B4D5B736CCD17 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_ToArray_mC3E5B9F0AEC815A68ACDD77645E6B71FF4075C1D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_tF50400EBC15D6DEEC3C43073E29EA18AE57314CC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1__ctor_m1AF07A5AAF7431D4835996D42244831EF686194F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IdentityFunction_1_get_Instance_mBD1034869883E9F64549214692515F574F892992 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IdentityFunction_1_tB8731DF771301F75148D0E6BCB44C144327A08BC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_ToDictionary_TisTSource_t2DB165C77D5A15C3655DD54335B6AE644D2D72B0_TisTKey_t5EF66CD775DA268D4018C30A568CE59CF5210B91_TisTSource_t2DB165C77D5A15C3655DD54335B6AE644D2D72B0_m06E92CFEB11D6BF383D6FF9A36D50B0FC0D4331A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Dictionary_2_t4493E1FD07BF64FFF852549818E1A30F659F9A65 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Dictionary_2__ctor_mD41414684F251E23FD44D934A1945B01AD6AD9A2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tCA075AB376DFE408D8AC0126F02F6DC6572D8BAF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t9881C285459458035F332F77470133CE23395912 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mDE2993D7792ED60CE6B2615F06D9A309722B6036 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m0C49A8E0C74B4F1C9482029D070F346D4B3D41F3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Dictionary_2_Add_mCA6DDF4DD83D83BA22FD47B269C8571F5DEC1AA0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tF59FD6141765ACD213B1549632973FF126A303FC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CastIterator_TisTResult_tC93DE6141C2AEDF5EB4A8227F077C88E3B78F3F6_m73F787DBA179CBED0E0866C5672C67F58D90D887 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CCastIteratorU3Ed__99_1_t59E9AD4ED6ED0E5731D5B3CABCC2584628B1E213 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CCastIteratorU3Ed__99_1__ctor_m8D18A4B714A8C323626C7849EB8EA3E9D88931C0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IList_1_tCAC22142D45D9B5BEDC0EC4316FB0787780E59C0 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t304709A63D159EB9956CBC8F5384C8DC17DAB944 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t3EEB6E917754CC0F2D884B5BAF09F79D06A23371 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t3443F0B85E56B92C25A45DC489F4E78C696B382A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t8DB477F20651176E75D2BCAEDF981D633D80CD34 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t4B7E760977A64E74AB1647667A03A3AC39E9537F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m9A695867B12FDC2909EE58D3C12974290AC63570 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IList_1_t9B2C39DD1935C0159FB061115AF5530046049F74 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t35B5CBD8B2D72DA7EC88941F6C85DA6146A26DAB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t5586386B55A509E36FD800F6EAAE2C2F1A01CBEB },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tD60C4749BBF149AB239D1DED16B258BCBD0E5F8F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tD0880E4FF3F8B3DBC95295C115964852F4006BDE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t2BDF305126D656BD2B3734A2BA28F10607A82074 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mE9A75A107233FECEE19A1C1E3AC7D3819565F736 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EmptyEnumerable_1_t461C324301407FD7CF00125C74C7BBB10E425032 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t6B558838B603B0E97AFA74C50F667305BDC94859 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tA56BDC4BCA945A181D326F97ACDDB3A23C56D75F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t71577311A5349A81219A3AAA87F5D7C87441334D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m22BF94126E79C0060E291A3973838BE70CBE99EF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t401C1362FA9CAA778DB957CA35F29F955A470D4D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t0AA8DC1E145B18DB5BB6E9E999383C3368225353 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t12A52A64081A5954F5F3EA1E13DAF2587E8C57DE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_Contains_TisTSource_t941CC4C3B89ECA76D1FAFE3BC385974F6C8372B2_m7B5F33A4BBBBE98861FC9B38AEE5090109400C8C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_m0DD948D8CCA4C1DA30E417512F50E4F463CFEBC2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_tC54E5776F429F385C6E93384568ABC1174A92F62 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t1C203359ED16BCC43AC4805C465D8D500686ADA8 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t102BE58A70A4033CB1BCB8B4D26DFB372CE314D2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t0F97F8650BAFC726D27A22B8B8478C2C7DC2B103 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t257489EBBACE672F8500A07CFCC31FEFCF92B2E3 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t89A541F99BCB0EEBEE67D723FB72C674454DB1B7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_3_Invoke_m84E0FE77597D3D417ABD382368120410E981B800 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Clone_m16088BFE7F81DDE461A0BB4E1EA29363B7201A88 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_get_Current_mBBDFA8B8A3ABB39089FBAAFB585F74B0645D5B9E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_tE27C213B5C79D15F8C95F178F87A749A817CDA5D },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_GetEnumerator_m13277F825C4179EF9CDE7A56336BA548EBDD8B66 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m7514E41D23F3DE4CFB867A3D46DFA8B2501AE00A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t50B70FACDE0E1B34143E9F8CD22ACA0B10FEEC26 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tE5D85FF692C59EBD4579D71A361979792364C8C2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_mB813B1FE2E20D2DF6F0FAB6A3038EF326256668F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m458FCA659FADA5A1CDD35B01DC76E07FC79011F6 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t014A3E7CE41868FE585432BE1E1F32DAF551BB36 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t540613216E99A3140BFFB2141072CF8D8C55007A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m9F7D28A9D6156DF8A1B912FFA0F747CFDBFC8D85 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_t925AD170B396F364902F7FA31791C320095C54E5_m204DB79421EDD3974CD0BFE16F7EF7B4FA48F1EA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t46C994A1424EC5EF082C585BBB32C2AD1D3D4CB3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m08367FB68BE2F5519F0A182BD80B2D4F7424C917 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m26CBEC6F3738C13265ED9A1DB94EAA482E5EEA40 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_tDCC95199B9B0AE888166B600A2150724F5886269 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1_t20BBB4A170F4320F138F207A6EBFB6C88FA8C6A1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereArrayIterator_1__ctor_m035206C0A4EEE229CD66670619A7BDC8DDE59F9F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m8E3DE59DA6A8AE4BCFAA34FA8B17B381A99D11AE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_mBF633E0AC48DC442C116F953FC60AFF40436CEA9 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_t78A097556235CA68272579A40AC9ABEE8E6228C8_mE267EE8715DC4D0B54E4FFA4137132863C8C05D5 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_tF7F044DA24DECBE0E5A6AE433108FE4E8268155F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m075E1384C767F3300E3B2B6BAE298A12DB74F92F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_mCC9DED6DA7E9DD65B1EF6F217D5806777C1C1C85 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t46EC0822C64AE0439F8EE76EB5155C7A9001F557 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1_tADF109EE7959D1951D59B9C41E18BD70E5441BB9 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereListIterator_1__ctor_m9002AB02279AE8B262F8BAAA95BE527B987ED958 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_GetEnumerator_mAFED2F8101B027035699A20B4805B534C316344E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_mE985AB113BB4586F6450A4754514B631705E7065 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m91A41D91BF9C53B5FCB823CEC4C05441E7358252 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_MoveNext_mD2B6AE94B197322F4771CD14316E0B95B8D82E64 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_mBCB5A059BDA76FBC39499E43B3D8BB751ECA6373 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombinePredicates_TisTSource_tD1ACF1646AF878DBE965885289D74649B3B828A3_m88595760E15A41A2E59213D4FBDF33DC3A92E7E6 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t8A71567888F15A3623F26A2EB610FC3763B9FF64 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_mCDDF6695E39D352EBF7D6737D08A17681DDBA0EB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m9C015AF4A450B4E6EB725D0A6EA193EC87089916 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t4A1A94CD1362426652FE8007391D7ACD149C3CAA },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t7031169C0E37784A65AB4F5B17C5BF181037AF67 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_mBCA01725B4D027EBDD90FF78834AF3D2322B97CD },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m9F3180789FE400C31D35F9F6D743AC390A0261D1 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t59F6FB0A645176EC2A74EFC6A6954B6A0BD8613E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_tC005608F0795FDFDD43CF49AD0A68249E3CF1555 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m80421D41060FA82A34CE13118BDD3A56276FFEC8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m03A1520007AD7AA7EB571079CEEBEA13E126518D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tFF7F615E8575AD96233222E6633A1C896E1BF3FE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m5411CF60E5F86BF7F54AFBD1E0C95C9688B29B92 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_tC2E77D7EA4AE607508C03DFA1362450D1DB1A2C4_TisTResult_t3163C282AB187D44EE2308497F3395E3287C66FD_TisTResult2_tFB17268A1DEC3B455218E8232DBF56A873701CCE_mA318522BDC6EBB841C57419082205164CCD9F44A },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2_t3E5F5CEC2B587397A95F9C132A4E93577A0E9EFA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectEnumerableIterator_2__ctor_m5DC380D132EC785F06988E5FD0D09A247B0DF032 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_m14C0DC72B8DD1FC0A32BA34CC7E04FF3106D72B8 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t8CC8E16A7609A1CB8D299492A8EA1452111C811D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_tC23CA6F5F16345355F547FF9E1F2156DCD628787 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_m892A5BC3C31E7332525AE5D21A1138941C2B6DE2 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mD9083CFC73A356C4CB6A92B62C096336829907FC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m5945185BD815F2681A769EACBE3C582FA97CB508 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m5EC8CEF99E23E398528FE0931DCC45AED3BEBF32 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tE2CE3763D78D5CC8F4AC63AFE78B1CBD23278F43 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m86D1FEB4F9AACB36F8538594B7B38AC89E7ECB80 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t6355F355A254894D36425000DA970098D26F6EF5_TisTResult_tD6A3EE7D4ACD5F7F9E7DB9F00F3C5CC598B55E0B_TisTResult2_tFB11D70CFC9A6D39CD2859C8E269998B71091CE7_m39F57864AB4D3B8C44CEC60B4BB6810ACC474BA4 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2_t738B3298CEC205A75135CED719B96FDCB3E19DB8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectArrayIterator_2__ctor_mCC0D6C5D6838B379F2E5934F6166D00E0D30D61F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1__ctor_mB57E6479A26693AC3E3228153DF5C3FF9244E556 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_t82B5A713AD6A0AEEA492B6EDD94AB36C177FB31E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t729D3E7AAD664CE67089CB48A807AC3E9301DD45 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_m4243EB70AC53128B69B768C753E22F06EC6C2F95 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_List_1_GetEnumerator_mABC2F0913AC1FB53A0A06DE4F593B0A59BC3014C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_mFB62C9BD7171865F3CFC87C8311E2C462791ACA0 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m27C03DB3F8030B00F631ADE2CD1A9DDF18D5ED23 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mE86C4D09C2F79FDFB4EA23E08D328E5EEAEC9639 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_MoveNext_m5C1C72BBB604DBBCBC5F0B6A885FB61372D4CA65 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Iterator_1_Dispose_m131C1D6FE9A3EF2550ADE8B2F01ED31A4B4CD89E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1_tF93BB76CC2E74178734ACB7F539BF5F5781032CC },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereEnumerableIterator_1__ctor_m5598588FA12141BFE352C9917F5398566B7074BB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerable_CombineSelectors_TisTSource_t35717B0D8465F7BF2FF374E22BFDE014E9CCAB7B_TisTResult_tEC155615E1838A087179B679DA38A5AB1DCB49F6_TisTResult2_t90E635D774BCB207895EA3440CF7DA243ADF7314_m243CCC2FD2B5576E0648150487553604A7579102 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2_t6461584B4A18CBB697BC8E65661BD2EDC3144F29 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_WhereSelectListIterator_2__ctor_m0CABE000C6C9936C0A0DCBDAB0CE517E636F36F7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_U3CU3Em__Finally1_m050074DB4F51F52D574D9B5115CFB040BA65DA78 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t6E240FDBB7ED1FE44B014C0FB35971DCEC84855C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t7FE10D42ADED2F3E416BAE4BFD911DF152208300 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_3_Invoke_m99BD7C0BDB6DECB7E2C6559454B90DD9939A4D77 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_System_IDisposable_Dispose_m0220A1C8F1FA9BEEB6A18C6273D18BEC91B555FD },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TResult_tDDEB83A02E7DDB0E932B2B5A5DA8D474276144AE },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_tF3302E53A050DEEB7F14179F368DC824E31AF270 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2__ctor_mDF2E3C83A960DC08B38464BBD9BBA55F2F4F3BD4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CSelectIteratorU3Ed__5_2_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_mE1AFD48D99037F90008FBB0EFB8EFC688EB6BD45 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m9A6744C087A6AC603C2858E37C8EB93CC6694884 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_mAC80E45654022092175F6F9E4FF0BF5987266C9C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m6633A2B4AF28FAD626AC68367C19680E515B512B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_U3CU3Em__Finally1_m176ABA9BF1EA498EA2F2F01E0743A5538DDCFD13 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tFDB4CD57E31B1A3A65CDEBC3787B908266388742 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t4E545E145CBECE5B499444F9E732D80FC5911E4E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_System_IDisposable_Dispose_m81DE20DFA4A3A4BBE4D0FF97F703B95CE41E5D94 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TSource_t768AD0D4D2D29E0079C31B83410396711C26DC64 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_tD155B0BA81CE6333AB2D82709BA9143DC355FC6A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1__ctor_mCC56FA4F2D409DCF46F2CE4512581053196E0A7B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CTakeIteratorU3Ed__25_1_System_Collections_Generic_IEnumerableU3CTSourceU3E_GetEnumerator_m6496161F40BE26EE1B6D17A6C4C1EA33E12D0C48 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CCastIteratorU3Ed__99_1_U3CU3Em__Finally1_mC129119E0A90CB46153DD4572867704D6ADF409F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TResult_t38C007C48B3FA701E32A0AF5BE0BAD85E956EF72 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CCastIteratorU3Ed__99_1_System_IDisposable_Dispose_mAEC71DE7E22F62888CE0BDCFF3C1BD0E3EDCBEA2 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CCastIteratorU3Ed__99_1_tC93EDEE882C4795DFD12C2F1FBC1A393FCD95FC5 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CCastIteratorU3Ed__99_1__ctor_mF29AEAAA369B61DB8F949A6709C64EABD5DB4E91 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CCastIteratorU3Ed__99_1_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m48201A9A5653132CF44527C305D8AD94A21B4A49 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElementU5BU5D_t8A94C4BFBF9E6BF79B51985125A00CE6111046BD },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EmptyEnumerable_1_t61D763760D8F245D25A64A37EA22E49B6A61D33F },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec_t7E02E403CA9127A9E60A070AC6D66CC5D5919ADF },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec_U3Cget_InstanceU3Eb__1_0_mA24100AAA0DA5F4EA14A51A50CDEE9290F87359D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_tD96FE9EE31E42E3126747DE11110BC8F62D6D2F4 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2__ctor_m68577F978A4FEF7E046AB64788F58B063ABDEB11 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec_tC00A4A5657B028F9EE81F26B21502944BABB33D1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec__ctor_m9F59EC7929C1D1080EFF3EEF94384EF4AA298512 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CU3Ec_tC00A4A5657B028F9EE81F26B21502944BABB33D1 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__1_t5D0486AEAB09755AF78B220EFA015EA86540C4B3 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_U3CGetEnumeratorU3Ed__1__ctor_mD7AD8598EA220AE5C3472A7151BCEB208DA7F24F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1_GetEnumerator_m6DF22CD2A54FD98EE9BC3A07367C286B21F9547B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_2_t2A47D4856AECFE1685BCA5481E27661F13EE1417 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_2__ctor_mD264D38202D3B90E502FDE99A254815B45B4BA65 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1_t7BF1A786B9BDA7D98997098F206D9FBEB8E805CE },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Buffer_1__ctor_m63F874F7E854E3962714E8472CB132C035CC416B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_m66C26D4385449EA5B7AC0AAAE558E827A547B8CF },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_Sort_m02DC1D19B109171CC6F0A97CA1A3A494A2F08F31 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElement_t333B92C559EDB1DAA4DB3278851F903367748A99 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1__ctor_mE30DC877F0F5D6F8AC240D104550276A35B6852C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1_t50B50FFBA4235D6A79D0BD205B625DE23059AB4A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Comparer_1_get_Default_m9E7E2CD7BBA500D9A9731C5906809FCBA65E1E30 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Comparer_1_tD0DB8DA2AE74C852F854EA8D9376FBD40626907C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_2_t2CEA9D5447B2F9F77A2272EFB103B886DA6A1420 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_2__ctor_m100971C016BC2A43E309CE5E2D698B9D1588B033 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_OrderedEnumerable_1_GetEnumerableSorter_mA88206BAC41B269377165C986FA5703FE0D98BF1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_ComputeKeys_m83D519A95C8BF3E64F4C001F694C1BA6B5AAA627 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_QuickSort_m1624C8412F34C475233B33FFFB9B72B17B8AB15F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_CompareKeys_m97F1B0F4295DCEC1F4D25AA1460D635ABDB083D7 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1__ctor_mCF1F7D79B54CC4982ACC920B5FC4820B6761D497 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_tD898552BB1412C8F871ECEF9E1E52EB11D1D9433 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TKeyU5BU5D_t6537368C948F1BE34C63755A2D32DD5D17382867 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Func_2_Invoke_m5B02612CC97C4353D26D2A468F97D6FF5F3BFFA8 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_ComputeKeys_m0E1B75812073569AF348E2322C90C5326D95A0BC },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IComparer_1_t885D3AAA10BAAD12BD427225987B0FD222695EBA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EnumerableSorter_1_CompareKeys_m4A804932C38687AA4E0B8569DB03D36A04BBEE46 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_t7C426FF7559846CA5118EB7658EEC1A091C8D99B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TElementU5BU5D_t7794BEA974AC676D685D83352F37C7ADBF84BD60 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_tD73EF5A715E0D735FB8796582DF7DAAE59248A28 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t721019D94B9F297B40CA782A203E918DCEF86D3E },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_get_Default_m0E4BF9A3FBB72E07033EA16B23935DD2A753BE7E },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_EqualityComparer_1_t57E7B5874DDB8ED0BBCF9EA1E8EE5E482DB475BF },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1__ctor_m59687428EFF3A060C7E4A58B33D8CCB1866245DB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1__ctor_m9B732C5C36D11AAEFABF7CEC13EDFF253C50A64D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_t3EA44E3F056CFAC7C7F285264896055E1059D328 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_AreEqualityComparersEqual_m58983B4575A37B747D2D07FDCBB7C63D16D601BC },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_t3EA44E3F056CFAC7C7F285264896055E1059D328 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_CopyFrom_m96F2513C029CF917546FD4A8EDFF667539B528BD },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_ICollection_1_tB68883F0155714DC8456B3030A8B6D79432B214F },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_Initialize_m388A18FBF12F617107200961B7E4736E2B032820 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_UnionWith_mF3EE8BDDCB380567655AE83AA914CEBA69B92308 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_TrimExcess_mEFE2B4AAE58BB50B40FAC84540B4EF632713E197 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_AddValue_m601C62BF19E00BFC28BF9E7EF8DEF0FDF5B69C23 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_AddIfNotPresent_mD32BD7F09DDC0123D28A33C4E91499817AEBDE5A },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_InternalGetHashCode_mDF2E29D60C603DBF5BE68A3DAD153D124902A38D },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_CopyTo_m2CEA36CE0A9828B0D2817BABB0778E9B7CC2D23B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_RuntimeHelpers_IsReferenceOrContainsReferences_TisT_tFA70BB9403614A86785198F7670E8A79579D96AA_mE4CF1DE156A56C76F3D17E5D356B4592BF76045B },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_t3B01BF569E0DDC9775F15A857D58FB5891FF9794 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator__ctor_mF6352008F027267A6D46E84C5EE5A593C2008B31 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IComparer_1_tAC617197608B3A3B8581D014191E97687ACBDC73 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_CopyTo_m3C429D78A2E5EB4297C0E1913DB8D3E719AF41E9 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEqualityComparer_1_t536A87393F54B1725FFA3488A3A2D91F245BF357 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_SlotU5BU5D_t27D40C306C68B962B6159BE0A16BC90AADB63D8C },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_TU5BU5D_t5B53AAF5CC8246F0EF74C6B8CE39B8BB71F520B1 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerable_1_t8524277609871504BAA6201A8229336029777E46 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_IEnumerator_1_t9A7C0233E00E7973685F97271E6352DFDE72107B },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_SetCapacity_mA30C348AE8DA2CB53D157195B16A8EF0AF88F810 },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_IncreaseCapacity_mA3287035E39B231BF0B2B4CDEFA182530F54F0DB },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_HashSet_1_get_Comparer_mD071150836E79AA358BC57DA040ED915A7051CCF },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_tFA70BB9403614A86785198F7670E8A79579D96AA },
	{ (Il2CppRGCTXDataType)3, (const Il2CppRGCTXDefinitionData *)&g_rgctx_Enumerator_get_Current_m5AF8DAD51CCB7D8472437E484EE9ECA33FACD0C8 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_t915F5DD3D2E812A343EBC3FB68983028184D4B2A },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	170,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	57,
	s_rgctxIndices,
	268,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
