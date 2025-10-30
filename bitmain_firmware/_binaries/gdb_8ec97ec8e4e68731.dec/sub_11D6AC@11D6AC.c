_DWORD *__fastcall sub_11D6AC(_DWORD *a1, int a2)
{
  int v4; // r3
  int v6; // r0
  int v7; // [sp+4h] [bp-8h] BYREF

  sub_11D54C(&v7, a2, 1, 1);
  v4 = v7;
  if ( v7 || (v4 = *(unsigned __int8 *)dword_489698, !*(_BYTE *)dword_489698) )
  {
    *a1 = v4;
    return a1;
  }
  v6 = sub_3245A4(a2);
  sub_11D54C(a1, v6, 1, 0);
  if ( !v7 )
    return a1;
  ((void (*)(void))loc_1625A8)();
  return a1;
}
