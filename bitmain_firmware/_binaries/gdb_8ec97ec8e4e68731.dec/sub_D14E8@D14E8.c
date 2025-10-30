void __fastcall sub_D14E8(_DWORD *a1)
{
  int v2; // r7
  void *v3; // r3
  _BYTE *v4; // r4
  int v5; // r2
  _DWORD *v6; // r6
  void *v7; // r9
  _DWORD v8[2]; // [sp+Ch] [bp-28h] BYREF
  int v9; // [sp+14h] [bp-20h]
  void *v10; // [sp+18h] [bp-1Ch] BYREF
  _BYTE *v11; // [sp+1Ch] [bp-18h]
  void *v12; // [sp+20h] [bp-14h]
  void *ptr; // [sp+24h] [bp-10h] BYREF
  int v14; // [sp+28h] [bp-Ch]

  v2 = dword_487D2C;
  ((void (__fastcall *)(void **, _DWORD *, _DWORD, int, _DWORD *))loc_D093C)(&v10, a1, a1[19], dword_487D2C, v8);
  v4 = (_BYTE *)v8[0];
  v5 = a1[21];
  if ( v8[0] )
  {
    v3 = 0;
    v6 = v10;
    v4 = v11;
  }
  else
  {
    v6 = 0;
  }
  if ( v8[0] )
  {
    v12 = v3;
    v10 = v3;
    v11 = v3;
  }
  if ( v5 )
  {
    ((void (__fastcall *)(void **, _DWORD *, int, int, _DWORD *))loc_D093C)(&ptr, a1, v5, v2, v8);
    v7 = ptr;
    if ( v8[0] )
    {
      v5 = -858993459 * ((v14 - (int)ptr) >> 3);
    }
    else if ( ptr )
    {
      v7 = (void *)v8[0];
      sub_339E64(ptr);
      v5 = (int)v7;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v7 = 0;
  }
  v14 = v5;
  ptr = v7;
  v8[1] = v6;
  v9 = -858993459 * ((v4 - (_BYTE *)v6) >> 3);
  sub_D0F0C(a1, v2, v6, v9, (int *)v7, v5);
  if ( v10 )
    sub_339E64(v10);
  if ( v7 )
    sub_339E64(v7);
  if ( v6 )
    sub_339E64(v6);
}
