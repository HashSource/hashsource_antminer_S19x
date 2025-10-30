int *__fastcall sub_C032C(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  _BYTE *v13; // r6
  int v14; // r1
  char v15; // r3
  int v16; // r5
  int v17; // r7
  int v18; // t1
  int v19; // r1
  int *v21; // [sp+4h] [bp-14h] BYREF
  _DWORD v22[2]; // [sp+8h] [bp-10h] BYREF
  char v23; // [sp+10h] [bp-8h]

  v13 = sub_9836C(0x38u);
  sub_C0900(v13, a3);
  v15 = v13[48];
  v16 = a9 - 1;
  *a1 = (int)v13;
  v13[48] = v15 & 0xFE;
  if ( a9 - 1 >= 0 )
  {
    v17 = a10 + 4 * a9;
    do
    {
      v18 = *(_DWORD *)(v17 - 4);
      v17 -= 4;
      v23 = 0;
      v21 = (int *)(v18 + 16);
      sub_BE2C0(v18, &v21, (int)v13, (int)v22);
      sub_BE0D4(*a1, v22);
      --v16;
      v13 = (_BYTE *)*a1;
    }
    while ( v16 != -1 );
  }
  sub_C0B5C(v13, v14, a5, a6);
  sub_C0B5C(*a1, v19, a4, 0);
  sub_C09B8(*a1, 52);
  sub_C0990(*a1, (unsigned __int8)a9);
  sub_C0DE0(*a1, a7, a8);
  sub_C09B8(*a1, 39);
  return a1;
}
