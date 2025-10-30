int __fastcall sub_1E1F8(_DWORD *a1)
{
  unsigned int v1; // r1
  int v3; // r0
  int v4; // r2
  unsigned int v5; // lr
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r3
  void *v10; // r0
  int v11; // r2
  int result; // r0
  void *v13; // r0
  int v14; // r2
  int v15; // r3
  unsigned int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r3
  int v22; // r3
  unsigned int v23; // r3
  int v24; // r0
  unsigned int v25; // r3
  unsigned int v26; // r3
  unsigned int v27; // r3
  _DWORD v28[4]; // [sp+0h] [bp-50h] BYREF
  int src; // [sp+10h] [bp-40h] BYREF
  int v30; // [sp+14h] [bp-3Ch]
  int v31; // [sp+18h] [bp-38h]
  _DWORD v32[8]; // [sp+30h] [bp-20h] BYREF

  v1 = a1[3];
  v3 = a1[1];
  v4 = (unsigned __int8)v1 >> 4;
  v28[1] = 0;
  v5 = (v1 >> 21) & 0xF;
  v28[0] = 0;
  a1[6] = v4;
  v28[2] = 0;
  a1[5] = v5;
  v28[3] = 0;
  if ( v4 == 9 )
  {
    if ( v5 - 4 <= 3 )
    {
      src = HIWORD(v1) & 0xF;
      v8 = 12;
      v30 = (unsigned __int16)v1 >> 12;
      v31 = 25;
      a1[8] = 3;
      goto LABEL_14;
    }
    if ( v5 <= 1 )
    {
      v17 = HIWORD(v1) & 0xF;
      goto LABEL_30;
    }
    if ( (v1 & 0x100000) == 0 && ((v1 >> 21) & 0xD) == 8 )
    {
      ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v3, HIWORD(v1) & 0xF, v28);
      v19 = a1[5];
      v20 = v28[0];
      v8 = 4;
      a1[7] = 1;
      a1[8] = 1;
      if ( v19 == 8 )
        v21 = 4;
      else
        v21 = 1;
      v32[0] = v21;
      v22 = a1[3];
      v32[1] = v20;
      src = (unsigned __int16)v22 >> 12;
      goto LABEL_14;
    }
    goto LABEL_29;
  }
  v6 = v1 & 0x100000;
  if ( (v1 & 0x100000) != 0 && ((v4 - 11) & 0xFFFFFFFD) == 0 )
  {
    v7 = (unsigned __int16)v1 >> 12;
    if ( v7 == 15 )
      v8 = 8;
    else
      v8 = 4;
    if ( v7 == 15 )
    {
      v4 = 25;
      v9 = 2;
    }
    else
    {
      v9 = 1;
    }
    if ( v7 == 15 )
    {
      src = 15;
      v30 = v4;
    }
    else
    {
      src = v7;
    }
    a1[8] = v9;
    goto LABEL_14;
  }
  v15 = (v1 >> 20) & 0x1F;
  if ( v4 != 3 )
  {
    switch ( v4 )
    {
      case 7:
        if ( v15 == 18 )
        {
          a1[8] = 2;
          return -1;
        }
        break;
      case 11:
        if ( !v6 )
        {
          sub_1CDAC((int)a1, &src, (int)v32, 1);
          goto LABEL_48;
        }
LABEL_29:
        v17 = (unsigned __int16)v1 >> 12;
LABEL_30:
        v18 = 25;
LABEL_31:
        src = v17;
        v30 = v18;
        v8 = 8;
        a1[8] = 2;
LABEL_14:
        v10 = (void *)sub_93028(v8);
        v11 = a1[8];
        a1[9] = v10;
        memcpy(v10, &src, 4 * v11);
        goto LABEL_15;
      case 1:
        if ( v15 == 18 )
        {
          v27 = (v1 >> 8) & 0xFFF;
          if ( v27 )
          {
            if ( ((v1 >> 8) & 1) == 0 )
              break;
            while ( 1 )
            {
              v27 >>= 1;
              if ( !v27 )
                break;
              if ( (v27 & 1) == 0 )
                goto LABEL_22;
            }
          }
          src = 25;
          v8 = 4;
          a1[8] = 1;
          goto LABEL_14;
        }
        if ( v15 == 22 )
        {
          v25 = (v1 >> 8) & 0xF;
          if ( v25 )
          {
            if ( ((v1 >> 8) & 1) == 0 )
              break;
            while ( 1 )
            {
              v25 >>= 1;
              if ( !v25 )
                break;
              if ( (v25 & 1) == 0 )
                goto LABEL_22;
            }
          }
          v26 = HIWORD(v1) & 0xF;
          if ( v26 )
          {
            if ( (v1 & 0x10000) == 0 )
              break;
            while ( 1 )
            {
              v26 >>= 1;
              if ( !v26 )
                break;
              if ( (v26 & 1) == 0 )
                goto LABEL_22;
            }
          }
          src = (unsigned __int16)v1 >> 12;
          v8 = 4;
          a1[8] = 1;
          goto LABEL_14;
        }
        break;
    }
LABEL_22:
    if ( !v6 && ((v1 >> 21) & 0xD) == 8 )
    {
      v16 = HIWORD(v1) & 0xF;
      if ( v16 )
      {
        if ( (v1 & 0x10000) != 0 )
        {
          do
            v16 >>= 1;
          while ( v16 && (v16 & 1) != 0 );
        }
      }
    }
    goto LABEL_29;
  }
  if ( v15 != 18 )
    goto LABEL_22;
  v23 = (v1 >> 8) & 0xFFF;
  if ( v23 )
  {
    if ( ((v1 >> 8) & 1) == 0 )
      goto LABEL_22;
    while ( 1 )
    {
      v23 >>= 1;
      if ( !v23 )
        break;
      if ( (v23 & 1) == 0 )
        goto LABEL_22;
    }
  }
  if ( v5 == 9 )
  {
    v17 = 25;
    v18 = 14;
    goto LABEL_31;
  }
LABEL_48:
  v24 = a1[8];
  if ( v24 )
  {
    v8 = 4 * v24;
    goto LABEL_14;
  }
LABEL_15:
  result = a1[7];
  if ( result )
  {
    v13 = (void *)sub_93028(8 * result);
    v14 = a1[7];
    a1[10] = v13;
    memcpy(v13, v32, 8 * v14);
    return 0;
  }
  return result;
}
