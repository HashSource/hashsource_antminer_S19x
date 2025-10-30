int __fastcall sub_1DAB8(_DWORD *a1)
{
  unsigned int v1; // r1
  int v3; // r5
  int v4; // r0
  int v5; // r12
  int v6; // r3
  bool v7; // zf
  int v8; // r6
  int v9; // r3
  int v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r3
  _DWORD *v13; // r8
  _DWORD *v14; // r10
  int v15; // lr
  unsigned int v16; // r12
  int v17; // r0
  int v18; // r0
  bool v20; // zf
  unsigned int v21; // r3
  int v22; // r12
  int v23; // r1
  int v24; // r5
  int v25; // r12
  int v26; // r3
  _DWORD *v27; // r2
  int v28; // r3
  int v29; // r3
  int v30; // r3
  void *v31; // r0
  int v32; // r2
  void *v33; // r0
  int v34; // r2
  int v35; // r2
  int v36; // r1
  int v37; // r3
  _DWORD *v38; // r2
  int v39; // r2
  int v40; // r2
  unsigned int v41; // r1
  int v42; // r3
  _DWORD v43[2]; // [sp+0h] [bp-228h] BYREF
  _DWORD v44[8]; // [sp+8h] [bp-220h] BYREF
  _DWORD src[136]; // [sp+28h] [bp-200h] BYREF

  v1 = a1[3];
  v3 = v1 & 0x100;
  v43[0] = 0;
  v43[1] = 0;
  v4 = (v1 >> 20) & 0x1E;
  if ( v4 != 4 )
  {
    v5 = (v1 >> 20) & 0x1B;
    v6 = (v1 >> 20) & 0x19;
    v7 = v6 == 8;
    if ( v6 != 8 )
      v7 = v5 == 18;
    if ( v7 )
    {
      v8 = HIWORD(v1) & 0xF;
      ((void (__fastcall *)(_DWORD, int, _DWORD *))loc_1DF9FC)(a1[1], v8, v43);
      v9 = a1[3];
      v10 = v43[0];
      v11 = (unsigned __int8)v9;
      if ( (v9 & 0x800000) == 0 )
        v10 = v43[0] - 4 * (unsigned __int8)v9;
      if ( (v9 & 0x200000) != 0 )
      {
        v44[0] = v8;
        a1[8] = 1;
      }
      if ( (_BYTE)v9 )
      {
        v12 = 0;
        do
        {
          while ( 1 )
          {
            v13 = &src[v12 + 128];
            v14 = &src[v12 + 129];
            v15 = v10 + 4;
            v16 = v12 + 2;
            if ( v3 )
              break;
            --v11;
            *(v13 - 128) = 4;
            v12 += 2;
            *(v14 - 128) = v10;
            v10 += 4;
            if ( !v11 )
              goto LABEL_15;
          }
          --v11;
          *(v13 - 128) = 4;
          v12 += 4;
          *(v14 - 128) = v10;
          src[v16] = 4;
          v10 += 8;
          *(v13 - 125) = v15;
        }
        while ( v11 );
LABEL_15:
        v11 = v12 >> 1;
      }
      a1[7] = v11;
      v17 = a1[8];
      goto LABEL_17;
    }
    v20 = v5 == 19;
    if ( v5 != 19 )
      v20 = v6 == 9;
    if ( !v20 )
    {
      v39 = (v1 >> 20) & 0x13;
      if ( v39 == 16 )
      {
        ((void (*)(void))loc_1DF9FC)();
        v28 = a1[3];
        v7 = (v28 & 0x800000) == 0;
        v29 = (4 * (_WORD)v28) & 0x3FC;
        if ( v7 )
          v30 = v43[0] - v29;
        else
          v30 = v29 + v43[0];
        src[1] = v30;
        if ( v3 )
        {
          src[3] = v30 + 4;
          src[0] = 4;
          src[2] = 4;
          a1[7] = 2;
        }
        else
        {
          src[0] = 4;
          a1[7] = 1;
        }
        v17 = a1[8];
        if ( !v17 )
        {
          v18 = a1[7];
          goto LABEL_45;
        }
LABEL_61:
        v4 = 4 * v17;
        goto LABEL_48;
      }
      if ( v39 == 17 )
      {
        v40 = (unsigned __int16)v1 >> 12;
        v41 = v1 >> 22;
        if ( v3 )
          v42 = 16 * v41;
        else
          v42 = v40 + 58;
        v4 = 4;
        if ( v3 )
          v42 = (v42 & 0x10 | v40) + 58;
        v44[0] = v42;
        a1[8] = 1;
        goto LABEL_48;
      }
      v17 = a1[8];
LABEL_17:
      if ( !v17 )
        goto LABEL_18;
      goto LABEL_61;
    }
    v21 = v1 >> 22;
    v22 = (unsigned __int16)v1 >> 12;
    if ( (v1 & 0x100) != 0 )
    {
      v17 = v1 & 0x200000;
      v22 |= (16 * (_BYTE)v21) & 0x10;
      if ( (v1 & 0x200000) == 0 )
      {
        v23 = (unsigned __int8)v1 >> 1;
        goto LABEL_56;
      }
    }
    else
    {
      v17 = v1 & 0x200000;
      if ( (v1 & 0x200000) == 0 )
      {
LABEL_27:
        v23 = (unsigned __int8)v1 >> 1;
        if ( v3 )
          v24 = 0;
        else
          v24 = v21 & 1;
        if ( v24 )
        {
          ++v23;
          goto LABEL_33;
        }
LABEL_56:
        if ( !v23 )
        {
LABEL_36:
          a1[8] = v17;
          goto LABEL_17;
        }
LABEL_33:
        v25 = v22 + 57;
        v26 = v25 + v23;
        v27 = &v44[v17 - 1];
        do
        {
          v27[1] = v26;
          ++v27;
          --v26;
        }
        while ( v26 != v25 );
        v17 += v23;
        goto LABEL_36;
      }
    }
    v17 = 1;
    v44[0] = HIWORD(v1) & 0xF;
    goto LABEL_27;
  }
  if ( (v1 & 0x100000) != 0 )
  {
    v4 = 8;
    v44[0] = (unsigned __int16)v1 >> 12;
    v44[1] = HIWORD(v1) & 0xF;
    a1[8] = 2;
  }
  else
  {
    v35 = (v1 >> 5) & 1;
    v36 = v1 & 0xF;
    if ( !v3 )
    {
      v37 = a1[8];
      v17 = v37 + 1;
      a1[8] = v37 + 1;
      v44[v37] = v36 + 58;
      if ( v35 )
      {
        v38 = &src[v17 + 128];
        v17 = v37 + 2;
        a1[8] = v37 + 2;
        *(v38 - 136) = v36 + 59;
      }
      goto LABEL_17;
    }
    a1[8] = 1;
    v44[0] = v36 + 16 * v35 + 58;
  }
LABEL_48:
  v33 = (void *)sub_93028(v4);
  v34 = a1[8];
  a1[9] = v33;
  memcpy(v33, v44, 4 * v34);
LABEL_18:
  v18 = a1[7];
  if ( !v18 )
    return 0;
LABEL_45:
  v31 = (void *)sub_93028(8 * v18);
  v32 = a1[7];
  a1[10] = v31;
  memcpy(v31, src, 8 * v32);
  return 0;
}
