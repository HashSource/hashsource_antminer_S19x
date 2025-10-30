_DWORD *__fastcall sub_BFD08(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  _BYTE *v8; // r4
  char v9; // r3
  _DWORD v11[2]; // [sp+0h] [bp-14h] BYREF
  char v12; // [sp+8h] [bp-Ch]

  v8 = sub_9836C(0x38u);
  sub_C0900(v8, a3);
  v9 = v8[48];
  *((_DWORD *)v8 + 13) = a5;
  v8[48] = v9 | 1;
  sub_BD334((int)v8, (int)v11, a4);
  if ( v12 )
  {
    *a1 = 0;
    sub_C0960(v8);
    sub_33AC04(v8);
  }
  else
  {
    sub_BD9D0((int)v8, v11);
    sub_C09B8(v8, 39);
    *a1 = v8;
  }
  return a1;
}
