int __fastcall sub_21DF08(int *a1, unsigned int a2, int a3, int *a4)
{
  _DWORD *v4; // r9
  int v5; // r11
  int *v6; // r7
  unsigned int v7; // r4
  unsigned int v10; // r8
  int v11; // r2
  _DWORD *v12; // r12
  _DWORD *v13; // lr
  bool v14; // cc
  unsigned int v15; // r3
  _DWORD *v16; // r3
  __int64 v17; // r0
  unsigned int v18; // r2
  _DWORD *v19; // r3
  unsigned int v20; // r10
  int v21; // r3
  int v22; // r2
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r1
  int v35; // r0
  int v36; // r2
  int v37; // r3
  unsigned int v38; // r1
  int v39; // r0
  _DWORD *v40; // [sp+0h] [bp-44h]
  int v41; // [sp+4h] [bp-40h]
  _DWORD v42[2]; // [sp+8h] [bp-3Ch] BYREF
  _DWORD v43[13]; // [sp+10h] [bp-34h] BYREF

  v6 = a4;
  v7 = a2;
  if ( a4 )
    v7 = a2 - 1;
  sub_1B240C(v42, v7);
  v10 = v42[0];
  if ( v42[0] )
  {
    if ( (*(_BYTE *)(v42[0] + 32) & 0xF) == 7 )
    {
      sub_1B1FB8(v43, *(char **)v42[0], 0);
      if ( v43[0] )
      {
        v35 = *(__int16 *)(v43[0] + 22);
        if ( v35 == -1 )
        {
          v17 = sub_94700((int)"symtab.c", 3162, "Section index is uninitialized");
LABEL_62:
          v40 = (_DWORD *)HIDWORD(v17);
          if ( v19 )
            goto LABEL_30;
          goto LABEL_13;
        }
        v36 = *(__int16 *)(v10 + 22);
        v37 = *(_DWORD *)(v10 + 8);
        v38 = *(_DWORD *)(v43[0] + 8) + *(_DWORD *)(*(_DWORD *)(v43[1] + 144) + 4 * v35);
        if ( v36 == -1 )
        {
          v39 = sub_94700((int)"symtab.c", 3163, "Section index is uninitialized", v37);
          return sub_21E23C(v39);
        }
        if ( v38 != v37 + *(_DWORD *)(*(_DWORD *)(v42[1] + 144) + 4 * v36) )
        {
          sub_21DEAC((int)a1, v38);
          return (int)a1;
        }
      }
    }
  }
  memset(&v43[2], 0, 0x28u);
  v5 = dword_487D2C;
  v41 = sub_21DB88(v7, a3);
  if ( v41 )
  {
    v12 = *(_DWORD **)(v41 + 12);
    if ( v12 )
    {
      v13 = 0;
      v4 = 0;
      v10 = 0;
      v6 = 0;
      do
      {
        v16 = (_DWORD *)v12[2];
        if ( v16 )
        {
          LODWORD(v17) = *v16;
          if ( (int)*v16 > 0 )
          {
            v18 = v16[2];
            v19 = v16 + 1;
            if ( v18 > v7 )
            {
              if ( v13 )
              {
                if ( v18 < v13[1] )
                  v13 = v19;
              }
              else
              {
                v13 = v19;
              }
              v11 = 0;
              v40 = v19;
            }
            else
            {
              v11 = 0;
              while ( 1 )
              {
                ++v11;
                HIDWORD(v17) = v19 + 2;
                if ( (_DWORD)v17 == v11 )
                  break;
                if ( v7 < v19[3] )
                  goto LABEL_62;
                v19 += 2;
              }
              v40 = v19 + 2;
LABEL_30:
              if ( *v19 )
              {
                v20 = v19[1];
                if ( !v6 || v6[1] < v20 )
                {
                  v6 = v19;
                  v4 = v12;
                  if ( v20 >= v10 )
                    v10 = 0;
                }
              }
            }
LABEL_13:
            v14 = (int)v6 <= 0;
            if ( v6 )
              v14 = (int)v17 <= v11;
            if ( !v14 )
            {
              v11 = v6[1];
              v15 = v40[1];
              if ( v15 > v11 )
              {
                v11 = v10 == 0;
                if ( v15 < v10 )
                  v11 = 1;
                if ( v11 )
                  v10 = v40[1];
              }
            }
          }
        }
        v12 = (_DWORD *)*v12;
      }
      while ( v12 );
      if ( v4 )
      {
        v21 = *v6;
        if ( *v6 )
        {
          v7 = v6[1];
          if ( v10 )
          {
            if ( v13 )
            {
              if ( v10 >= v13[1] )
                v10 = v13[1];
            }
          }
          else
          {
            if ( v13 )
              v10 = v13[1];
            else
              v11 = v41;
            if ( !v13 )
              v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 32) + 8) + 4);
          }
        }
        else
        {
          v4 = 0;
          v10 = 0;
        }
      }
      else
      {
        v10 = 0;
        v21 = 0;
      }
    }
    else
    {
      v4 = 0;
      v10 = 0;
      v21 = 0;
    }
    v43[6] = v21;
    v43[7] = v7;
    v43[8] = v10;
    v43[2] = v5;
    v43[3] = v4;
    v43[5] = a3;
    v22 = v43[4];
    *a1 = v5;
    a1[1] = (int)v4;
    a1[2] = v22;
    a1[3] = a3;
    v23 = v43[7];
    v24 = v43[8];
    v25 = v43[9];
    a1[4] = v43[6];
    a1[5] = v23;
    a1[6] = v24;
    a1[7] = v25;
    v26 = v43[11];
    a1[8] = v43[10];
    a1[9] = v26;
    return (int)a1;
  }
  if ( v6 )
    ++v7;
  v43[2] = v5;
  v43[7] = v7;
  v28 = v43[3];
  v29 = v43[4];
  v30 = v43[5];
  *a1 = v5;
  a1[1] = v28;
  a1[2] = v29;
  a1[3] = v30;
  v31 = v43[7];
  v32 = v43[8];
  v33 = v43[9];
  a1[4] = v43[6];
  a1[5] = v31;
  a1[6] = v32;
  a1[7] = v33;
  v34 = v43[11];
  a1[8] = v43[10];
  a1[9] = v34;
  return (int)a1;
}
