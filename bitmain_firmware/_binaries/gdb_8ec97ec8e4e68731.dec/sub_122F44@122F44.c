int __fastcall sub_122F44(unsigned int *a1, int a2)
{
  unsigned int v2; // r8
  unsigned int v3; // r7
  int v4; // r3
  unsigned int v5; // r6
  int v6; // r4
  int v7; // r9
  unsigned int v8; // r5
  int *v9; // r2
  int v10; // r1
  int v12; // r0
  char v13; // r2
  char *v14; // lr
  int v15; // r2
  int v16; // r0
  int v17; // r9
  int v18; // r12
  int v19; // r3
  char v20; // t1
  unsigned int v21; // r4
  char v22; // r2
  char *v23; // lr
  bool v24; // zf
  int v25; // r2
  int v26; // r12
  int v27; // r3
  char v28; // t1
  unsigned int v29; // r8
  int *v30; // r2
  int v31; // r1
  int *v32; // r2
  int v33; // r8
  char *v34; // r0
  int v35; // r3
  int v36; // r1
  char v37; // r2
  char v38; // t1
  char v39; // r2
  char *v40; // lr
  bool v41; // zf
  int v42; // r2
  int v43; // r12
  int v44; // r3
  char v45; // t1
  unsigned int v46; // r8
  __int64 v47; // r0
  const char *v48; // r2
  int v49; // [sp+8h] [bp-134h]
  int v50; // [sp+8h] [bp-134h]
  int v51; // [sp+8h] [bp-134h]
  int v52; // [sp+10h] [bp-12Ch]
  __int64 *v54; // [sp+1Ch] [bp-120h]
  int v55[66]; // [sp+34h] [bp-108h] BYREF

  v2 = 0;
  v3 = *a1;
  v4 = *(_DWORD *)a2;
  v24 = *a1 == 0;
  v5 = a1[1];
  v55[1] = 0;
  v52 = v4;
  v55[2] = 0;
  if ( v24 )
    return 0;
  v6 = 1;
  v54 = (__int64 *)(a2 + 176);
  while ( 2 )
  {
    v7 = *(unsigned __int8 *)(v5 + v2);
    v8 = v2 + 1;
    switch ( *(_BYTE *)(v5 + v2) )
    {
      case 3:
        ++v6;
        HIDWORD(v47) = *(_DWORD *)(v52 + 36);
        LODWORD(v47) = *(_DWORD *)HIDWORD(v47);
        HIDWORD(v47) += 4;
        v12 = sub_11E3C0(v47, v5 + v8, a2, v55);
        goto LABEL_11;
      case 6:
        if ( v3 > v8 )
          goto LABEL_28;
        goto LABEL_24;
      case 8:
        ++v6;
        v2 += 2;
        v55[v6 + 1] = *(unsigned __int8 *)(v5 + v8);
        goto LABEL_12;
      case 9:
        ++v6;
        v2 += 2;
        v55[v6 + 1] = (*(unsigned __int8 *)(v5 + v8) ^ 0x80) - 128;
        goto LABEL_12;
      case 0xA:
        ++v6;
        v2 += 3;
        v55[v6 + 1] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(*(_DWORD *)(v52 + 36) + 4) + 52))(v5 + v8);
        goto LABEL_12;
      case 0xB:
        ++v6;
        v2 += 3;
        v55[v6 + 1] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(*(_DWORD *)(v52 + 36) + 4) + 56))(v5 + v8);
        goto LABEL_12;
      case 0xC:
        ++v6;
        v2 += 5;
        v55[v6 + 1] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(*(_DWORD *)(v52 + 36) + 4) + 40))(v5 + v8);
        goto LABEL_12;
      case 0xD:
        ++v6;
        v2 += 5;
        v55[v6 + 1] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(*(_DWORD *)(v52 + 36) + 4) + 44))(v5 + v8);
        goto LABEL_12;
      case 0xE:
        ++v6;
        v2 += 9;
        v55[v6 + 1] = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)(*(_DWORD *)(v52 + 36) + 4) + 28))(v5 + v8);
        goto LABEL_12;
      case 0x10:
        v39 = *(_BYTE *)(v5 + v8);
        v40 = (char *)(v5 + v8 + 1);
        v41 = (v39 & 0x80) == 0;
        LOBYTE(v42) = v39 & 0x7F;
        if ( v41 )
          v2 = 1;
        v51 = (unsigned __int8)v42;
        if ( !v41 )
        {
          v43 = 0;
          v42 = (unsigned __int8)v42;
          v44 = 0;
          do
          {
            v45 = *v40++;
            v43 += 7;
            v46 = v45 & 0x7F;
            v42 |= v46 << v43;
            v44 |= (v46 << (v43 - 32)) | (v46 >> (32 - v43));
          }
          while ( v45 < 0 );
          v2 = (unsigned int)&v40[-v5 - v8];
          v51 = v42;
        }
        ++v6;
        v55[0] = v2;
        v2 += v8;
        v55[v6 + 1] = v51;
        goto LABEL_12;
      case 0x11:
        v33 = 0;
        v34 = (char *)(v5 + v8);
        v35 = 0;
        v36 = 0;
        do
        {
          v38 = *v34++;
          v37 = v38;
          ++v33;
          v36 |= (v38 & 0x7F) << v35;
          v35 += 7;
        }
        while ( v38 < 0 );
        if ( v35 <= 63 && (v37 & 0x40) != 0 )
          v36 |= -(1 << v35);
        ++v6;
        v55[0] = v33;
        v2 = v8 + v33;
        v55[v6 + 1] = v36;
        goto LABEL_12;
      case 0x12:
        ++v2;
        v32 = &v55[v6++ + 65];
        v55[v6 + 1] = *(v32 - 64);
        goto LABEL_12;
      case 0x1C:
        v30 = &v55[v6 + 64];
        v31 = v55[v6-- + 1];
        *(v30 - 64) -= v31;
        goto LABEL_5;
      case 0x22:
        v9 = &v55[v6 + 64];
        v10 = v55[v6-- + 1];
        *(v9 - 64) += v10;
        goto LABEL_5;
      case 0x23:
        v22 = *(_BYTE *)(v5 + v8);
        v23 = (char *)(v5 + v8 + 1);
        v24 = (v22 & 0x80) == 0;
        LOBYTE(v25) = v22 & 0x7F;
        if ( v24 )
          v2 = 1;
        v50 = (unsigned __int8)v25;
        if ( !v24 )
        {
          v26 = 0;
          v25 = (unsigned __int8)v25;
          v27 = 0;
          do
          {
            v28 = *v23++;
            v26 += 7;
            v29 = v28 & 0x7F;
            v25 |= v29 << v26;
            v27 |= (v29 << (v26 - 32)) | (v29 >> (32 - v26));
          }
          while ( v28 < 0 );
          v2 = (unsigned int)&v23[-v5 - v8];
          v50 = v25;
        }
        v55[0] = v2;
        v2 += v8;
        v55[v6 + 1] += v50;
        goto LABEL_12;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3D:
      case 0x3E:
      case 0x3F:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4A:
      case 0x4B:
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x4F:
        ++v6;
        ++v2;
        v55[v6 + 1] = v7 - 48;
        goto LABEL_12;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
      case 0x60:
      case 0x61:
      case 0x62:
      case 0x63:
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
      case 0x6D:
      case 0x6E:
      case 0x6F:
        v55[++v6 + 1] = v7 - 80;
        if ( v3 <= v8 )
          goto LABEL_24;
LABEL_28:
        if ( dword_47AC88 <= 0 )
        {
          ++v2;
          goto LABEL_31;
        }
        sub_121FE4();
        ++v2;
        if ( v6 > 62 )
          goto LABEL_25;
        continue;
      case 0x90:
        v13 = *(_BYTE *)(v5 + v8);
        v14 = (char *)(v5 + v8 + 1);
        v24 = (v13 & 0x80) == 0;
        LOBYTE(v15) = v13 & 0x7F;
        v16 = (unsigned __int8)v15;
        if ( v24 )
        {
          v17 = 1;
        }
        else
        {
          v18 = 0;
          v15 = (unsigned __int8)v15;
          v19 = 0;
          v49 = v6;
          do
          {
            v20 = *v14++;
            v18 += 7;
            v21 = v20 & 0x7F;
            v17 = (int)&v14[-v5 - v8];
            v16 = v15 | (v21 << v18);
            v15 = v16;
            v19 |= (v21 << (v18 - 32)) | (v21 >> (32 - v18));
          }
          while ( v20 < 0 );
          v6 = v49;
          v8 = v2 + 1;
        }
        ++v6;
        v2 = v8 + v17;
        v55[0] = v17;
        v55[v6 + 1] = v16;
        if ( v3 > v8 + v17 )
        {
          if ( dword_47AC88 > 0 )
            sub_121FE4();
LABEL_31:
          if ( v6 > 62 )
            goto LABEL_25;
          continue;
        }
LABEL_24:
        if ( v6 <= 62 )
          return v55[v6 + 1];
LABEL_25:
        if ( dword_47AC88 <= 0 )
          return 0;
        sub_F43B4(&off_46D334, "location description stack overflow");
        return 0;
      case 0x9B:
      case 0xE0:
        if ( v3 > v8 && dword_47AC88 > 0 )
          sub_121FE4();
        ++v2;
        ++v55[v6 + 1];
        goto LABEL_12;
      case 0xF0:
LABEL_5:
        if ( v6 > 62 )
          goto LABEL_25;
        if ( !v6 )
        {
          if ( dword_47AC88 > 0 )
          {
            sub_F43B4(&off_46D334, "location description stack underflow");
            return 0;
          }
          return 0;
        }
        ++v2;
LABEL_8:
        if ( v3 <= v2 )
          return v55[v6 + 1];
        continue;
      case 0xFB:
      case 0xFC:
        ++v6;
        v12 = sub_122EAC((unsigned __int8 *)(a2 + 14), v54, (_BYTE *)(v5 + v8), v55);
LABEL_11:
        v2 = v8 + v55[0];
        v55[v6 + 1] = v12;
LABEL_12:
        if ( v6 > 62 )
          goto LABEL_25;
        goto LABEL_8;
      default:
        v48 = (const char *)sub_322B3C(*(unsigned __int8 *)(v5 + v2));
        if ( v48 )
        {
          if ( dword_47AC88 > 0 )
            sub_F43B4(&off_46D334, "unsupported stack op: '%s'", v48);
        }
        else if ( dword_47AC88 > 0 )
        {
          sub_F43B4(&off_46D334, "unsupported stack op: '%02x'", v7);
        }
        return v55[v6 + 1];
    }
  }
}
