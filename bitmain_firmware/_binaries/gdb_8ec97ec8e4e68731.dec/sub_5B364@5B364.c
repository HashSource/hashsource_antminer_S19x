void __fastcall sub_5B364(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r3
  int v9; // r2
  int v10; // r11
  size_t v11; // r4
  const char **v12; // r6
  unsigned int v13; // r2
  int v14; // r7
  size_t v15; // r2
  _BYTE *v16; // r3
  int v17; // r2
  int v18; // r7
  void *v19; // r6
  int v20; // r8
  int v21; // r0
  int v22; // r3
  bool v23; // zf
  int v24; // r0
  int v25; // r3
  _BYTE *v26; // r3
  int v27; // r7
  unsigned int v28; // r4
  unsigned int v29; // r2
  int v30; // r10
  const char *v31; // r4
  const char *v32; // t1
  size_t v33; // r2
  _BYTE *v34; // r3
  int v35; // r7
  unsigned int v36; // r4
  _BYTE *v37; // r3
  unsigned int v38; // r10
  unsigned int v39; // r2
  const char *v40; // r1
  const char *v41; // r1
  int v42; // [sp+0h] [bp-DCh]
  __int64 v44; // [sp+38h] [bp-A4h]
  int v45; // [sp+40h] [bp-9Ch]
  int v46; // [sp+44h] [bp-98h]
  int v47; // [sp+48h] [bp-94h]
  char *v48; // [sp+4Ch] [bp-90h]
  int v49; // [sp+50h] [bp-8Ch]
  int v50; // [sp+54h] [bp-88h]
  int v51; // [sp+64h] [bp-78h]
  _DWORD v52[3]; // [sp+68h] [bp-74h] BYREF
  const char *v53; // [sp+74h] [bp-68h] BYREF
  int v54; // [sp+78h] [bp-64h] BYREF
  int v55; // [sp+7Ch] [bp-60h] BYREF
  char *nptr; // [sp+80h] [bp-5Ch] BYREF
  int v57; // [sp+84h] [bp-58h] BYREF
  char v58[8]; // [sp+88h] [bp-54h] BYREF
  char *v59; // [sp+90h] [bp-4Ch] BYREF
  char *v60; // [sp+94h] [bp-48h]
  char *v61; // [sp+9Ch] [bp-40h]
  int v62; // [sp+A0h] [bp-3Ch]
  int v63; // [sp+A4h] [bp-38h]
  void *v64; // [sp+A8h] [bp-34h] BYREF
  int v65; // [sp+ACh] [bp-30h]
  _DWORD v66[4]; // [sp+B0h] [bp-2Ch] BYREF
  void *ptr; // [sp+C0h] [bp-1Ch] BYREF
  int v68; // [sp+C4h] [bp-18h]
  _DWORD v69[5]; // [sp+C8h] [bp-14h] BYREF

  v53 = 0;
  v54 = 0;
  v65 = 0;
  LOBYTE(v66[0]) = 0;
  v55 = 0;
  v64 = v66;
  sub_19CC78(&v59);
  v5 = 0;
  v50 = 1;
  v44 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v45 = 0;
  v46 = -1;
  while ( 1 )
  {
    v6 = sub_602EC("-break-insert", a3, a2, &off_358D20, &v55, &nptr);
    if ( v6 < 0 )
      break;
    switch ( v6 )
    {
      case 0:
        HIDWORD(v44) = 1;
        break;
      case 1:
        v45 = v6;
        break;
      case 2:
        v48 = nptr;
        break;
      case 3:
        v47 = strtol(nptr, 0, 10);
        break;
      case 4:
        v46 = strtol(nptr, 0, 10);
        break;
      case 5:
        v49 = 1;
        break;
      case 6:
        v50 = 0;
        break;
      case 7:
        LODWORD(v44) = 1;
        break;
      case 8:
        v5 = 1;
        v59 = nptr;
        break;
      case 9:
        v5 = 1;
        v60 = nptr;
        break;
      case 10:
        v5 = 1;
        v61 = nptr;
        break;
      case 11:
        sub_198D60((int)v52, nptr);
        v5 = 1;
        v62 = v52[0];
        v63 = v52[1];
        break;
      default:
        continue;
    }
  }
  v8 = v55;
  if ( a3 <= v55 )
  {
    if ( !v5 )
    {
      v41 = "break";
      if ( a1 )
        v41 = "dprintf";
      sub_946E0("-%s-insert: Missing <location>", v41);
    }
    if ( a1 )
    {
      v9 = v44;
      v8 = HIDWORD(v44) | v44;
      if ( !v44 )
        goto LABEL_131;
      goto LABEL_15;
    }
  }
  else
  {
    if ( a1 )
    {
      v7 = v44;
      v9 = HIDWORD(v44) | v44;
      if ( v5 )
      {
        if ( !v44 )
          goto LABEL_9;
      }
      else
      {
        v8 = v55 + 1;
        if ( !v44 )
        {
          if ( a3 > v8 )
          {
LABEL_9:
            v10 = a3 - v8;
            v11 = 0;
            v12 = (const char **)(a2 + 4 * v8);
            ptr = v69;
            v68 = 1;
            LOWORD(v69[0]) = 34;
            while ( strlen(*v12) > v11 )
            {
              v14 = (unsigned __int8)(*v12)[v11];
              switch ( (*v12)[v11] )
              {
                case 7:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\a", 2);
                  break;
                case 8:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\b", 2);
                  break;
                case 9:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\t", 2);
                  break;
                case 0xA:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\n", 2);
                  break;
                case 0xB:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\v", 2);
                  break;
                case 0xC:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\f", 2);
                  break;
                case 0xD:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\r", 2);
                  break;
                case 0x22:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\\"", 2);
                  break;
                case 0x5C:
                  if ( v68 == 2147483646 || v68 == 0x7FFFFFFF )
                    sub_33D184("basic_string::append");
                  sub_33C320(&ptr, "\\\\", 2);
                  break;
                default:
                  if ( isprint(v14) )
                  {
                    v37 = ptr;
                    v38 = v68 + 1;
                    v51 = v68;
                    if ( ptr == v69 )
                      v39 = 15;
                    else
                      v39 = v69[0];
                    if ( v38 > v39 )
                    {
                      v42 = 1;
                      sub_33B4F8(&ptr, v68, 0);
                      v37 = ptr;
                    }
                    v37[v51] = v14;
                    v68 = v38;
                    *((_BYTE *)ptr + v38) = 0;
                  }
                  else
                  {
                    sub_93170(v58, 5, "\\%o", v14);
                    v15 = strlen(v58);
                    if ( 0x7FFFFFFF - v68 < v15 )
                      sub_33D184("basic_string::append");
                    sub_33C320(&ptr, v58, v15);
                  }
                  break;
              }
              ++v11;
            }
            v26 = ptr;
            v27 = v68;
            if ( ptr != v69 )
              v13 = v69[0];
            v28 = v68 + 1;
            if ( ptr == v69 )
              v13 = 15;
            if ( v28 > v13 )
            {
              v42 = 1;
              sub_33B4F8(&ptr, v68, 0);
              v26 = ptr;
            }
            v26[v27] = 34;
            v29 = 0;
            v68 = v27 + 1;
            *((_BYTE *)ptr + v28) = 0;
            if ( v10 != 1 )
            {
              v30 = a1;
              do
              {
                v34 = ptr;
                v35 = v68;
                if ( ptr != v69 )
                  v29 = v69[0];
                v36 = v68 + 1;
                if ( ptr == v69 )
                  v29 = 15;
                if ( v36 > v29 )
                {
                  v42 = 1;
                  sub_33B4F8(&ptr, v68, 0);
                  v34 = ptr;
                }
                v34[v35] = 44;
                v68 = v35 + 1;
                *((_BYTE *)ptr + v36) = 0;
                v32 = v12[1];
                ++v12;
                v31 = v32;
                v33 = strlen(v32);
                if ( 0x7FFFFFFF - v68 < v33 )
                  sub_33D184("basic_string::append");
                sub_33C320(&ptr, v31, v33);
                ++v30;
              }
              while ( v10 != v30 );
            }
            v16 = v64;
            if ( ptr == v69 )
            {
              sub_33B48C(&v64, &ptr);
              v16 = ptr;
              goto LABEL_63;
            }
            if ( v64 == v66 )
            {
              v64 = ptr;
              v65 = v68;
              v66[0] = v69[0];
            }
            else
            {
              v64 = ptr;
              v65 = v68;
              v17 = v66[0];
              v66[0] = v69[0];
              if ( v16 )
              {
                ptr = v16;
                v69[0] = v17;
LABEL_63:
                v68 = 0;
                *v16 = 0;
                if ( ptr != v69 )
                  sub_339E64(ptr);
                v53 = *(const char **)(a2 + 4 * v55);
                goto LABEL_66;
              }
            }
            ptr = v69;
            v16 = v69;
            goto LABEL_63;
          }
LABEL_131:
          sub_946E0("-dprintf-insert: Missing <format>", v7, v9, v8);
        }
      }
LABEL_15:
      sub_946E0("-dprintf-insert: does not support -h or -a");
    }
    if ( v5 )
      sub_946E0("-break-insert: Garbage following explicit location");
    if ( v55 < a3 - 1 )
      sub_946E0("-break-insert: Garbage following <location>");
    v53 = *(const char **)(a2 + 4 * v55);
  }
LABEL_66:
  if ( !dword_47482C )
  {
    sub_1B9B88(sub_5B2CC);
    dword_47482C = 1;
  }
  v18 = dword_474828;
  dword_474828 = 1;
  if ( (_DWORD)v44 )
  {
    v19 = &unk_4785BC;
    if ( HIDWORD(v44) )
      v20 = 28;
    else
      v20 = 27;
  }
  else
  {
    if ( !a1 )
    {
      v19 = &unk_47840C;
      if ( HIDWORD(v44) )
        v20 = 2;
      else
        v20 = 1;
      if ( v5 )
        goto LABEL_73;
      goto LABEL_88;
    }
    v19 = &unk_4787B4;
    v20 = 30;
  }
  if ( v5 )
  {
LABEL_73:
    if ( v59 && !v60 && !v61 && v63 == 3 )
    {
      v40 = "break";
      if ( a1 )
        v40 = "dprintf";
      sub_946E0("-%s-insert: --source option requires --function, --label, or --line", v40);
    }
    v21 = sub_19D0B8(v58, &v59);
    v22 = *(_DWORD *)v58;
    *(_DWORD *)v58 = 0;
    v23 = v54 == 0;
    v54 = v22;
    if ( !v23 )
    {
      v21 = ((int (__fastcall *)(int *))loc_19D154)(&v54);
      if ( *(_DWORD *)v58 )
        v21 = ((int (__fastcall *)(char *))loc_19D154)(v58);
    }
    goto LABEL_78;
  }
LABEL_88:
  v21 = sub_19D99C(&v57, &v53, off_46D5A4[0], v5, v42);
  v25 = v57;
  v57 = 0;
  v23 = v54 == 0;
  v54 = v25;
  if ( !v23 )
  {
    v21 = ((int (__fastcall *)(int *))loc_19D154)(&v54);
    if ( v57 )
      v21 = ((int (__fastcall *)(int *))loc_19D154)(&v57);
  }
  if ( *v53 )
    sub_946E0("Garbage '%s' at end of location", v53);
LABEL_78:
  v24 = sub_B894C(v21);
  sub_DA350(v24, v54, v48, v46, v64, 0, v45, v20, v47, v49 ^ 1, v19, 0, v50, 0, 0);
  dword_474828 = v18;
  if ( v64 != v66 )
    sub_339E64(v64);
  if ( v54 )
    ((void (__fastcall *)(int *))loc_19D154)(&v54);
}
