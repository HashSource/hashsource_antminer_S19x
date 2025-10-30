_QWORD *__fastcall sub_120DC(_QWORD *a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r4
  __int64 v6; // r6
  __int64 v7; // r0

  v4 = sub_11490((const void *)a2);
  v5 = sub_11490((const void *)(a2 + 8));
  v6 = sub_11490((const void *)(a2 + 16));
  v7 = sub_11490((const void *)(a2 + 24));
  sub_11FBC(a1, v4, v5, v6, v7, a3, a4);
  return a1;
}
