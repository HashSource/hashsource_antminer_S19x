_DWORD *__fastcall sub_1B01C4(_DWORD *a1, int a2)
{
  void *v3; // r1
  int v4; // r2
  int v5; // r3
  void *v7; // [sp+8h] [bp-2Ch] BYREF
  int v8; // [sp+Ch] [bp-28h]
  int v9; // [sp+10h] [bp-24h]
  void **v10; // [sp+14h] [bp-20h] BYREF
  void *ptr; // [sp+18h] [bp-1Ch]
  int v12; // [sp+1Ch] [bp-18h]
  _BYTE v13[16]; // [sp+20h] [bp-14h] BYREF

  v10 = &v7;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v12 = 0;
  v13[0] = 0;
  ptr = v13;
  if ( sub_274C9C("target memory map", 0, &off_3C7B30, a2, &v10) )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    v3 = v7;
    v4 = v8;
    v5 = v9;
    v7 = 0;
    v8 = 0;
    *a1 = v3;
    a1[1] = v4;
    a1[2] = v5;
    v9 = 0;
  }
  if ( ptr != v13 )
    sub_339E64(ptr);
  if ( v7 )
    sub_339E64(v7);
  return a1;
}
