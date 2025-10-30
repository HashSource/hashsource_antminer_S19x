int *__fastcall sub_333B44(int *a1, unsigned __int8 *a2, int a3)
{
  _DWORD v7[5]; // [sp+0h] [bp-40h] BYREF
  int v8; // [sp+14h] [bp-2Ch]
  int v9[9]; // [sp+1Ch] [bp-24h] BYREF

  sub_3312AC((int)v7, 128);
  v7[3] = *(_DWORD *)(a3 + 12);
  sub_329A10((int)v9, a2, (int)v7);
  sub_332F20(a1, v9, (int)v7);
  if ( v8 )
    sub_3313E4(a3, v8);
  return a1;
}
