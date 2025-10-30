int __fastcall sub_2C86E8(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r11
  _DWORD *v4; // r3
  _DWORD *v5; // r4
  int v8; // r8
  int v9; // r5
  int v10; // r4
  char *v11; // r7
  void (__fastcall *v12)(_DWORD *, char *, int); // r3
  int v13; // r3
  int v15; // r2
  char *v16; // r10
  _DWORD *v17; // r5
  char *v18; // r4
  char *v19; // r8
  int v20; // r12
  int v21; // r0
  int v22; // lr
  int v23; // r12
  int v24; // r0
  int v25; // r2
  int v26; // r1
  int v27; // r3
  int v28; // r3
  unsigned int v29; // r3
  int v30; // r2
  bool v31; // zf
  char *v32; // r1
  void (__fastcall *v33)(_DWORD *, char *); // r3
  char *v34; // r3
  int v35; // r3
  int v36; // r0
  char *v37; // r0
  char *v38; // r0
  _DWORD *v39; // [sp+10h] [bp-2Ch]
  int v40; // [sp+14h] [bp-28h]
  char *ptr; // [sp+18h] [bp-24h]
  int v43; // [sp+20h] [bp-1Ch]
  __int16 v44[4]; // [sp+34h] [bp-8h] BYREF

  v4 = (_DWORD *)a1[40];
  v5 = a3;
  if ( !a3 )
    v3 = (int)(v4 + 18);
  if ( a3 )
  {
    v5 = (_DWORD *)v4[582];
    v3 = (int)(v4 + 60);
    if ( v5 )
      v5 = v4 + 88;
    if ( (v4[583] && !v4[144] || v4[584] && !v4[145]) && !sub_2D6E9C(a1, 0) )
      return -1;
  }
  v8 = *(_DWORD *)(v3 + 24) >> 4;
  v40 = *(_DWORD *)(a1[1] + 444);
  if ( v8 )
  {
    v39 = (_DWORD *)sub_2CDA08((int)a1, v3, v8, 0, 0, 0, 0);
    if ( !v39 )
      return -1;
    v11 = (char *)sub_2AD09C((int)a1, 52 * v8);
    if ( !v11 )
      goto LABEL_80;
    if ( v5 )
    {
      v15 = v5[6] >> 1;
      if ( v15 != v8 )
      {
        v16 = 0;
        ptr = 0;
        sub_2A6A5C("%B: version count (%Ld) does not match symbol count (%ld)", a1, v15, v8);
LABEL_32:
        v17 = v39 + 5;
        if ( &v39[5 * v8] <= v39 + 5 )
        {
          v9 = 0;
          v10 = 0;
          goto LABEL_11;
        }
        v18 = v11 + 24;
        v43 = v8;
        v19 = (char *)&v39[5 * v8];
        while ( 1 )
        {
          v20 = *v17;
          v21 = v17[2];
          v22 = v17[3];
          *((_DWORD *)v18 + 1) = v17[1];
          *((_DWORD *)v18 + 2) = v21;
          *(_DWORD *)v18 = v20;
          *((_DWORD *)v18 + 3) = v22;
          v23 = v17[4];
          *((_DWORD *)v18 - 6) = a1;
          *((_DWORD *)v18 + 4) = v23;
          v24 = sub_2CDDA8(a1, v3, v17, 0);
          v26 = v17[4];
          v27 = *v17;
          *((_DWORD *)v18 - 5) = v24;
          *((_DWORD *)v18 - 4) = v27;
          if ( v26 )
          {
            if ( v26 == -15 )
              goto LABEL_74;
            if ( v26 != -14 )
            {
              v36 = sub_2CFEF4(a1, v26, v25);
              *((_DWORD *)v18 - 2) = v36;
              if ( !v36 )
LABEL_74:
                *((_DWORD *)v18 - 2) = &off_470950;
              v28 = (a1[10] >> 5) & 0xFFFFF;
              goto LABEL_36;
            }
            *((_DWORD *)v18 - 2) = &off_470800;
            v28 = (a1[10] >> 5) & 0xFFFFF;
            if ( ((a1[10] >> 5) & 0x10000) != 0 )
            {
              v38 = sub_2AD7AC((int)a1, "COMMON");
              if ( !v38 )
              {
                v38 = (char *)sub_2ADBE8((int)a1, "COMMON", (int)&loc_209000 + 1);
                if ( !v38 )
                {
                  if ( !ptr )
                    goto LABEL_80;
LABEL_79:
                  free(ptr);
                  goto LABEL_80;
                }
              }
              *((_DWORD *)v18 - 2) = v38;
              v28 = (a1[10] >> 5) & 0xFFFFF;
            }
            *((_DWORD *)v18 - 4) = v17[1];
          }
          else
          {
            *((_DWORD *)v18 - 2) = &off_4708A8;
            v28 = (a1[10] >> 5) & 0xFFFFF;
          }
LABEL_36:
          if ( (v28 & 0x42) != 0 )
            *((_DWORD *)v18 - 4) -= *(_DWORD *)(*((_DWORD *)v18 - 2) + 28);
          v29 = *((unsigned __int8 *)v17 + 12);
          switch ( v29 >> 4 )
          {
            case 0u:
              *((_DWORD *)v18 - 3) |= 1u;
              LOBYTE(v29) = *((_BYTE *)v17 + 12);
              break;
            case 1u:
              v30 = v17[4];
              v31 = v30 == 0;
              if ( v30 )
                v31 = v30 == -14;
              if ( !v31 )
              {
                *((_DWORD *)v18 - 3) |= 2u;
                LOBYTE(v29) = *((_BYTE *)v17 + 12);
              }
              break;
            case 2u:
              *((_DWORD *)v18 - 3) |= 0x80u;
              LOBYTE(v29) = *((_BYTE *)v17 + 12);
              break;
            case 0xAu:
              *((_DWORD *)v18 - 3) |= 0x800000u;
              LOBYTE(v29) = *((_BYTE *)v17 + 12);
              break;
            default:
              break;
          }
          switch ( v29 & 0xF )
          {
            case 1u:
              v35 = *((_DWORD *)v18 - 3);
              goto LABEL_59;
            case 2u:
              *((_DWORD *)v18 - 3) |= 8u;
              break;
            case 3u:
              *((_DWORD *)v18 - 3) |= 0x104u;
              break;
            case 4u:
              *((_DWORD *)v18 - 3) |= 0x4004u;
              break;
            case 5u:
              v35 = *((_DWORD *)v18 - 3) | 0x40;
LABEL_59:
              *((_DWORD *)v18 - 3) = v35 | 0x10000;
              break;
            case 6u:
              *((_DWORD *)v18 - 3) |= 0x40000u;
              break;
            case 8u:
              *((_DWORD *)v18 - 3) |= 0x80000u;
              break;
            case 9u:
              *((_DWORD *)v18 - 3) |= 0x100000u;
              break;
            case 0xAu:
              *((_DWORD *)v18 - 3) |= 0x400000u;
              break;
            default:
              break;
          }
          if ( a3 )
            *((_DWORD *)v18 - 3) |= 0x8000u;
          if ( v16 )
          {
            v32 = v16;
            v16 += 2;
            sub_2CD6C0(a1, v32, v44);
            *((_WORD *)v18 + 12) = v44[0];
          }
          v33 = *(void (__fastcall **)(_DWORD *, char *))(v40 + 52);
          if ( v33 )
            v33(a1, v18 - 24);
          v17 += 5;
          v34 = v18 + 28;
          v18 += 52;
          if ( v19 <= (char *)v17 )
          {
            v8 = v43;
            v10 = v34 - v11;
            v9 = -991146299 * ((v34 - v11) >> 2);
            goto LABEL_11;
          }
        }
      }
      if ( sub_2A8A04((int)a1, *((_QWORD *)v5 + 2), 0) )
        goto LABEL_80;
      v37 = (char *)sub_2AB368(v5[6]);
      ptr = v37;
      if ( v37 )
      {
        if ( sub_2A87D8((int)v37, v5[6], (int)a1) != v5[6] )
          goto LABEL_79;
        v16 = ptr + 2;
        goto LABEL_32;
      }
      if ( v5[6] || sub_2A87D8(0, 0, (int)a1) != v5[6] )
      {
LABEL_80:
        if ( *(_DWORD **)(v3 + 48) != v39 )
        {
          v9 = -1;
          free(v39);
          return v9;
        }
        return -1;
      }
    }
    ptr = 0;
    v16 = 0;
    goto LABEL_32;
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  ptr = 0;
  v39 = 0;
LABEL_11:
  v12 = *(void (__fastcall **)(_DWORD *, char *, int))(v40 + 56);
  if ( v12 )
    v12(a1, v11, v8);
  if ( a2 )
  {
    if ( v10 > 0 )
    {
      v13 = v9;
      do
      {
        --v13;
        *a2++ = v11;
        v11 += 52;
      }
      while ( v13 > 0 );
    }
    *a2 = 0;
  }
  if ( ptr )
    free(ptr);
  if ( v39 && *(_DWORD **)(v3 + 48) != v39 )
    free(v39);
  return v9;
}
