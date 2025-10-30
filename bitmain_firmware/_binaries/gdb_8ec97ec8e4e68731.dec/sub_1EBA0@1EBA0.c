int __fastcall sub_1EBA0(_DWORD *a1)
{
  unsigned int v1; // r5
  int v3; // r6
  unsigned int v4; // r7
  int v5; // r0
  void *v6; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r0
  __int64 v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r2
  bool v15; // zf
  void *v16; // r0
  int v17; // r2
  _DWORD v18[2]; // [sp+0h] [bp-54h] BYREF
  _DWORD v19[2]; // [sp+8h] [bp-4Ch] BYREF
  int src; // [sp+10h] [bp-44h] BYREF
  int v21; // [sp+14h] [bp-40h]
  _DWORD v22[9]; // [sp+30h] [bp-24h] BYREF

  v1 = a1[3];
  v3 = a1[1];
  v18[1] = 0;
  v18[0] = 0;
  v19[0] = 0;
  v19[1] = 0;
  if ( (v1 & 0x1000) != 0 )
  {
    v4 = (v1 >> 9) & 7;
    if ( v4 <= 3 )
    {
      if ( v4 == 3 )
      {
        v9 = a1[8];
        if ( !v9 )
          goto LABEL_7;
      }
      else
      {
        ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v3, (v1 >> 3) & 7, v18);
        ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v3, (v1 >> 6) & 7, v19);
        if ( v4 )
        {
          if ( v4 == 2 )
            v12 = 1;
          else
            v12 = 2;
          v22[0] = v12;
        }
        else
        {
          v22[0] = 4;
        }
        v9 = a1[8];
        v13 = v18[0];
        v14 = v19[0];
        v15 = v9 == 0;
        a1[7] = 1;
        if ( !v9 )
          v9 = 8;
        v22[1] = v13 + v14;
        if ( v15 )
          goto LABEL_28;
      }
      v5 = 4 * v9;
    }
    else
    {
      src = v1 & 7;
      v5 = 4;
      a1[8] = 1;
    }
  }
  else if ( (v1 & 0x800) != 0 )
  {
    v5 = 4;
    src = (v1 >> 8) & 7;
    a1[8] = 1;
  }
  else
  {
    LODWORD(v11) = v1 & 7;
    if ( (v1 & 0x1C00) != 0 )
    {
      src = 25;
      HIDWORD(v11) = (v1 >> 8) & 3;
      if ( v11 == 0x300000000LL )
      {
        v5 = 4;
        a1[8] = 1;
      }
      else
      {
        a1[8] = 2;
        v5 = 8;
        v21 = (v1 >> 4) & 8 | v11;
      }
    }
    else
    {
      if ( (v1 & 0x80) != 0 )
        LODWORD(v11) = v11 + 8;
      v21 = v11;
      v5 = 8;
      src = 25;
      a1[8] = 2;
    }
  }
  v6 = (void *)sub_93028(v5);
  v7 = a1[8];
  a1[9] = v6;
  memcpy(v6, &src, 4 * v7);
LABEL_7:
  v8 = a1[7];
  if ( !v8 )
    return 0;
  v9 = 8 * v8;
LABEL_28:
  v16 = (void *)sub_93028(v9);
  v17 = a1[7];
  a1[10] = v16;
  memcpy(v16, v22, 8 * v17);
  return 0;
}
