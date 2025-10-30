int __fastcall sub_3489C8(unsigned int *a1, int a2, unsigned int a3, int a4)
{
  unsigned int v5; // r6
  unsigned int v6; // r8
  unsigned int v7; // r7
  unsigned int v8; // r2
  unsigned int v9; // r7
  int result; // r0
  bool v11; // zf
  int *v12; // r0
  int v13; // r3
  unsigned int v14; // r2
  int v15; // r1
  unsigned int v16; // r6
  int v17; // r7
  int *v18; // r2
  _DWORD *v19; // r1
  int *v20; // r3
  int v21; // r0
  int *v22; // r4
  _DWORD *v23; // r0
  int v24; // r1
  int v25; // r1
  unsigned int v26; // r2
  unsigned int v27; // r1
  _DWORD *v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r1
  int v31; // r8
  _DWORD *v32; // r4
  int *v33; // r1
  _DWORD *v34; // r0
  int v35; // t1
  int v36; // r0
  char *v37; // r0
  int v38; // t1
  unsigned int v39; // r1
  _DWORD *v40; // r1
  unsigned int v41; // [sp+4h] [bp-10Ch]
  _QWORD v42[16]; // [sp+8h] [bp-108h] BYREF
  _DWORD v43[34]; // [sp+88h] [bp-88h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( a4 )
        return 2;
      v22 = (int *)a1[14];
      v23 = a1 + 1;
      do
      {
        v24 = 1 << a4++;
        ++v23;
        if ( ((unsigned __int16)v24 & (unsigned __int16)a3) != 0 )
        {
          v25 = *v22++;
          *(v23 - 1) = v25;
        }
      }
      while ( a4 != 16 );
      result = a3 & 0x2000;
      if ( (a3 & 0x2000) != 0 )
        return 0;
      a1[14] = (unsigned int)v22;
      return result;
    case 1:
      if ( (a4 & 0xFFFFFFFB) != 1 )
        return 2;
      v5 = HIWORD(a3);
      v6 = (unsigned __int16)a3;
      v7 = HIWORD(a3) + (unsigned __int16)a3;
      if ( a4 == 1 )
      {
        if ( v7 > 0x10 || v5 > 0xF )
          return 2;
        v39 = *a1 << 31;
        if ( (*a1 & 1) != 0 )
        {
          *a1 &= 0xFFFFFFFC;
          sub_348C8C(a1 + 18, v39);
          a4 = 1;
        }
        v41 = a4;
        sub_348C8C(v43, v39);
        v33 = (int *)a1[14];
        a4 = v41;
        if ( !v6 )
          goto LABEL_68;
LABEL_70:
        v31 = 2 * v6;
        v32 = &v43[2 * v5];
        v9 = 0;
        goto LABEL_51;
      }
      if ( v7 > 0x20 )
        return 2;
      v8 = a4 != 5;
      if ( v5 <= 0xF )
      {
        if ( v7 <= 0x10 )
        {
          v27 = *a1;
          if ( (*a1 & 1) == 0 )
          {
LABEL_71:
            if ( v5 <= 0xF )
            {
              v41 = a4;
              v9 = v6;
              sub_348C9C(v43);
              v33 = (int *)a1[14];
              a4 = v41;
              if ( !v6 )
                goto LABEL_58;
            }
            else
            {
              v9 = v6;
              v33 = (int *)a1[14];
              if ( !v6 )
                goto LABEL_59;
            }
            goto LABEL_70;
          }
          v9 = 0;
        }
        else
        {
          v9 = v7 - 16;
          if ( a4 != 5 )
            return 2;
          v26 = *a1;
          v27 = *a1;
          if ( (*a1 & 1) == 0 )
            goto LABEL_45;
        }
        v41 = a4;
        *a1 = v27 & 0xFFFFFFFE;
        v28 = a1 + 18;
        if ( a4 == 5 )
        {
          *a1 = v27 & 0xFFFFFFFC | 2;
          sub_348C9C(v28);
        }
        else
        {
          v29 = v27 & 0xFFFFFFFC;
          *a1 = v29;
          sub_348C8C(v28, v29);
        }
        a4 = v41;
      }
      else
      {
        if ( !v6 )
          v8 = 0;
        v9 = v6;
        if ( v8 )
          return 2;
      }
      if ( v9 )
      {
        v26 = *a1;
LABEL_45:
        v30 = v26 << 29;
        if ( (v26 & 4) != 0 )
        {
          *a1 = v26 & 0xFFFFFFFB;
          v41 = a4;
          sub_348CAC(a1 + 52, v30);
          a4 = v41;
        }
        if ( v5 <= 0xF )
        {
          v41 = a4;
          sub_348C9C(v43);
          a4 = v41;
        }
        v41 = a4;
        sub_348CAC(v42, v30);
        v8 = a1[14];
        a4 = v41;
        if ( (int)(16 - v5) <= 0 )
        {
LABEL_54:
          v36 = v5;
          if ( v5 < 0x10 )
            v36 = 16;
          v33 = (int *)(v8 + 8 * v9);
          v37 = (char *)&v42[v36 - 16] - 4;
          do
          {
            v38 = *(_DWORD *)v8;
            v8 += 4;
            *((_DWORD *)v37 + 1) = v38;
            v37 += 4;
          }
          while ( (int *)v8 != v33 );
LABEL_58:
          if ( a4 != 1 )
          {
LABEL_59:
            a1[14] = (unsigned int)v33;
            if ( v5 <= 0xF )
              sub_348C94(v43, v33, v8);
            if ( v9 )
              sub_348CA4(v42, v33, v8);
            return 0;
          }
LABEL_68:
          v40 = v33 + 1;
          a1[14] = (unsigned int)v40;
          sub_348C84(v43, v40, v8);
          return 0;
        }
        v31 = 2 * (16 - v5);
        v32 = &v43[2 * v5];
        v33 = (int *)a1[14];
LABEL_51:
        v8 = (unsigned int)&v33[v31];
        v34 = v32 - 1;
        do
        {
          v35 = *v33++;
          v34[1] = v35;
          ++v34;
        }
        while ( v33 != (int *)v8 );
        if ( !v9 )
          goto LABEL_58;
        goto LABEL_54;
      }
      goto LABEL_71;
    case 3:
      if ( a4 != 3 )
        return 2;
      v16 = HIWORD(a3);
      v17 = (unsigned __int16)a3;
      if ( HIWORD(a3) + (unsigned __int16)a3 > 0x10u )
        return 2;
      if ( (*a1 & 8) != 0 )
      {
        *a1 &= ~8u;
        sub_348CF8(a1 + 84);
      }
      sub_348CF8(v43);
      v19 = &v43[2 * v16];
      v20 = (int *)a1[14];
      if ( v17 )
      {
        v18 = &v20[2 * v17];
        do
        {
          v21 = *v20++;
          *v19++ = v21;
        }
        while ( v20 != v18 );
      }
      a1[14] = (unsigned int)v20;
      sub_348CB4(v43, v19, v18);
      return 0;
    case 4:
      v11 = a3 == 16;
      if ( a3 <= 0x10 )
        v11 = a4 == 0;
      if ( !v11 )
        return 2;
      if ( (*a1 & 0x10) != 0 )
      {
        *a1 &= ~0x10u;
        v41 = a3;
        sub_348D50(a1 + 116);
        a3 = v41;
      }
      v41 = a3;
      sub_348D50(v43);
      v12 = (int *)a1[14];
      v13 = 0;
      v14 = v41;
      do
      {
        v15 = 1 << v13;
        if ( ((1 << v13) & v14) != 0 )
        {
          v15 = *v12++;
          v43[v13] = v15;
        }
        ++v13;
      }
      while ( v13 != 4 );
      a1[14] = (unsigned int)v12;
      sub_348D3C(v43, v15, v14);
      return 0;
    default:
      return 2;
  }
}
