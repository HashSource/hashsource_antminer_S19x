unsigned __int8 *__fastcall sub_31F920(void **a1, unsigned __int8 *a2, int a3)
{
  int v4; // r8
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r5
  signed int v8; // r4
  _BYTE *v9; // r2
  unsigned __int8 *v10; // r11
  unsigned __int8 *v11; // r9
  __int64 v12; // r2
  int v13; // r3
  int v14; // r4
  char *v15; // r1
  bool v16; // zf
  int v17; // r2
  bool v18; // zf
  int v20; // r3
  unsigned int v21; // r8
  unsigned __int8 *v22; // r7
  int v23; // r3
  int v24; // r3
  char *v25; // r1
  void **v26; // r0
  __int64 v27; // r2
  bool v28; // zf
  int v29; // r11
  __int64 v30; // r0
  _BYTE *v31; // r7
  __int64 v32; // [sp+0h] [bp-24h]
  size_t v33; // [sp+10h] [bp-14h] BYREF
  void *ptr; // [sp+14h] [bp-10h] BYREF
  _BYTE *v35; // [sp+18h] [bp-Ch]
  int v36; // [sp+1Ch] [bp-8h]

  if ( !a2 )
    return 0;
  if ( (word_438898[*a2] & 4) == 0 )
    return 0;
  v4 = 0;
  v33 = 0;
  v6 = sub_31EE34(a2, (int *)&v33);
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = v33;
  if ( !v33 )
    return 0;
  if ( a3 == 4 )
  {
    v9 = a1[1];
    v10 = v6;
    v11 = v6;
    if ( *a1 != v9 )
      v4 = v9 - (_BYTE *)*a1;
    HIDWORD(v12) = "_D";
    while ( (word_438898[*v7] & 4) == 0 )
    {
      if ( !strncmp((const char *)v7, "_D", 2u) )
      {
        v7 = (unsigned __int8 *)sub_320BA0(a1, v7, 1, v13, v32, HIDWORD(v32));
LABEL_30:
        if ( !v7 )
          goto LABEL_15;
      }
      if ( v7 - v10 == v8 )
        return v7;
LABEL_15:
      v12 = 1717986919LL * v8;
      v14 = v8 >> 31;
      v32 = v12;
      v15 = (char *)*a1;
      LODWORD(v12) = a1[1];
      v16 = *a1 == (void *)v12;
      if ( *a1 != (void *)v12 )
        LODWORD(v12) = v12 - (_DWORD)v15;
      v8 = (SHIDWORD(v12) >> 2) - v14;
      if ( v16 )
        v17 = v4;
      else
        v17 = v4 - v12;
      v7 = v10 - 1;
      if ( v17 < 0 )
        a1[1] = &v15[v4];
      if ( !v11 )
        return 0;
      v18 = v8 == 0;
      if ( v8 )
      {
        --v10;
      }
      else
      {
        v8 = v33;
        v10 = v11;
      }
      if ( v18 )
        v11 = 0;
    }
    v7 = (unsigned __int8 *)sub_31FE74(a1, v7, 3, HIDWORD(v12), v32, HIDWORD(v32));
    goto LABEL_30;
  }
  if ( strlen((const char *)v6) >= v33 )
  {
    if ( (int)v33 <= 4 || *v7 != 95 || v7[1] != 95 || (unsigned int)v7[2] - 84 > 1 )
    {
      switch ( v33 )
      {
        case 6u:
          if ( !strncmp((const char *)v7, "__ctor", 6u) )
          {
            sub_31E858((int)a1, "this");
            v7 += v33;
          }
          else
          {
            if ( strncmp((const char *)v7, "__dtor", 6u) )
            {
              if ( !strncmp((const char *)v7, "__initZ", 7u) )
              {
                v25 = "initializer for ";
                v26 = a1;
                goto LABEL_61;
              }
              if ( !strncmp((const char *)v7, "__vtblZ", 7u) )
              {
                v25 = "vtable for ";
                v26 = a1;
                goto LABEL_61;
              }
              goto LABEL_33;
            }
            sub_31E858((int)a1, "~this");
            v7 += v33;
          }
          return v7;
        case 7u:
          if ( strncmp((const char *)v7, "__ClassZ", 8u) )
            goto LABEL_33;
          v25 = "ClassInfo for ";
          v26 = a1;
          goto LABEL_61;
        case 0xAu:
          if ( strncmp((const char *)v7, "__postblitMFZ", 0xDu) )
            goto LABEL_33;
          sub_31E858((int)a1, "this(this)");
          v7 += v33 + 3;
          return v7;
        case 0xBu:
          if ( strncmp((const char *)v7, "__InterfaceZ", 0xCu) )
            goto LABEL_33;
          v25 = "Interface for ";
          v26 = a1;
          goto LABEL_61;
        case 0xCu:
          if ( strncmp((const char *)v7, "__ModuleInfoZ", 0xDu) )
            goto LABEL_33;
          v25 = "ModuleInfo for ";
          v26 = a1;
LABEL_61:
          sub_31EBA8(v26, v25);
          v27 = *(_QWORD *)a1;
          v28 = (_DWORD)v27 == HIDWORD(v27);
          if ( (_DWORD)v27 == HIDWORD(v27) )
            HIDWORD(v27) = -1;
          else
            HIDWORD(v27) -= v27;
          if ( !v28 )
            --HIDWORD(v27);
          v7 += v33;
          a1[1] = (void *)(v27 + HIDWORD(v27));
          break;
        default:
LABEL_33:
          sub_31EC14(__SPAIR64__((unsigned int)v7, (unsigned int)a1), v8);
          v7 += v33;
          break;
      }
      return v7;
    }
    v20 = v7[3];
    v21 = ((word_438898[v20] ^ 4u) >> 2) & 1;
    if ( v20 == 48 )
      v21 = 1;
    if ( !v21 )
    {
      v22 = (unsigned __int8 *)sub_31F920(a1, v7 + 3);
      sub_31E858((int)a1, "!(");
      if ( !v22 )
      {
LABEL_87:
        v7 = 0;
        sub_31E858((int)a1, ")");
        return v7;
      }
      v23 = *v22;
      if ( *v22 )
      {
        while ( v23 != 90 )
        {
          if ( v21 )
            sub_31E858((int)a1, ", ");
          v24 = *v22;
          if ( v24 == 72 )
            v24 = *++v22;
          switch ( v24 )
          {
            case 'T':
              v22 = (unsigned __int8 *)sub_3200E0(a1, v22 + 1);
              break;
            case 'V':
              v29 = v22[1];
              v36 = 0;
              v35 = 0;
              ptr = 0;
              v30 = (unsigned int)sub_3200E0(&ptr, v22 + 1) | 0x100000000LL;
              v31 = (_BYTE *)v30;
              LODWORD(v30) = &ptr;
              sub_31E7E8(v30);
              *v35 = 0;
              v22 = sub_31F1C8((unsigned int)a1, v31, (char *)ptr, v29);
              if ( ptr )
                free(ptr);
              break;
            case 'S':
              v22 = (unsigned __int8 *)sub_31F920(a1, v22 + 1);
              break;
            default:
              v22 = 0;
              goto LABEL_51;
          }
          if ( !v22 )
            goto LABEL_87;
          v23 = *v22;
          ++v21;
          if ( !*v22 )
            goto LABEL_83;
        }
        ++v22;
LABEL_51:
        sub_31E858((int)a1, ")");
        if ( !v22 )
          return 0;
      }
      else
      {
LABEL_83:
        sub_31E858((int)a1, ")");
      }
      if ( v8 == v22 - v7 )
        return v22;
    }
  }
  return 0;
}
