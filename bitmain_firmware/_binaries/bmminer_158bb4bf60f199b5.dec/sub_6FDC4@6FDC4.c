__int64 __fastcall sub_6FDC4(_QWORD *a1)
{
  __int64 result; // r0
  __int64 v3; // r2
  __int64 v4; // [sp+0h] [bp-10h] BYREF
  __int64 v5; // [sp+8h] [bp-8h] BYREF

  v4 = 0;
  v5 = 0;
  sub_6688C(4, &v4);
  sub_6688C(5, (_DWORD *)&v4 + 1);
  sub_6688C(4, &v5);
  sub_6688C(5, (_DWORD *)&v5 + 1);
  result = v4;
  v3 = v5;
  *a1 = v4;
  a1[1] = v3;
  return result;
}
