unsigned __int8 *__fastcall sub_3200E0(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // r4
  char *v4; // r3
  unsigned __int8 *v6; // r1
  size_t v7; // r6
  void *v8; // r0
  int v9; // r3
  char *v10; // r1
  unsigned __int8 *v11; // r4
  int v12; // r1
  size_t v13; // r6
  _BYTE *v14; // r6
  _BYTE *v15; // r1
  size_t v16; // r7
  int v17; // t1
  int v18; // r3
  void *ptr; // [sp+4h] [bp-10h] BYREF
  _BYTE *v20; // [sp+8h] [bp-Ch]
  int v21; // [sp+Ch] [bp-8h]

  v2 = a2;
  if ( !a2 )
    return v2;
  if ( *a2 )
  {
    switch ( *a2 )
    {
      case 'A':
        v2 = (unsigned __int8 *)sub_3200E0(a1, a2 + 1);
        sub_31E858(a1, (char *)&dword_433230);
        return v2;
      case 'B':
        if ( a2 == (unsigned __int8 *)-1 )
          return 0;
        if ( (word_438898[a2[1]] & 4) == 0 )
          return 0;
        ptr = 0;
        v2 = sub_31EE34(a2 + 1, (int *)&ptr);
        if ( !v2 )
          return 0;
        sub_31E858(a1, "Tuple!(");
        v4 = (char *)ptr;
        while ( 2 )
        {
          ptr = v4 - 1;
          if ( v4 )
          {
            v2 = (unsigned __int8 *)sub_3200E0(a1, v2);
            if ( ptr )
            {
              sub_31E858(a1, ", ");
              v4 = (char *)ptr;
              continue;
            }
            ptr = (void *)-1;
          }
          break;
        }
        sub_31E858(a1, ")");
        return v2;
      case 'C':
      case 'E':
      case 'I':
      case 'S':
      case 'T':
        return sub_31FE74(a1, a2 + 1, 2);
      case 'D':
        ptr = 0;
        v21 = 0;
        v20 = 0;
        v6 = sub_31E89C((int)&ptr, a2 + 1);
        if ( ptr == v20 )
        {
          v2 = (unsigned __int8 *)sub_3209DC(a1, v6);
          sub_31E858(a1, "delegate");
          v8 = ptr;
        }
        else
        {
          v7 = v20 - (_BYTE *)ptr;
          v2 = (unsigned __int8 *)sub_3209DC(a1, v6);
          sub_31E858(a1, "delegate");
          v8 = ptr;
          if ( v7 )
          {
            sub_31EC14(__SPAIR64__((unsigned int)ptr, a1), v7);
            v8 = ptr;
          }
        }
        if ( !v8 )
          return v2;
        goto LABEL_19;
      case 'F':
      case 'R':
      case 'U':
      case 'V':
      case 'W':
      case 'Y':
LABEL_14:
        v2 = (unsigned __int8 *)sub_3209DC(a1, v2);
        sub_31E858(a1, "function");
        return v2;
      case 'G':
        v14 = a2 + 1;
        v15 = a2 + 1;
        if ( (word_438898[v2[1]] & 4) != 0 )
        {
          do
          {
            v16 = v15 - v2;
            v17 = (unsigned __int8)*++v15;
          }
          while ( (word_438898[v17] & 4) != 0 );
          v2 = (unsigned __int8 *)sub_3200E0(a1, v15);
          sub_31E858(a1, "[");
          if ( v16 )
            sub_31EC14(__SPAIR64__((unsigned int)v14, a1), v16);
        }
        else
        {
          v2 = (unsigned __int8 *)sub_3200E0(a1, v15);
          sub_31E858(a1, "[");
        }
        sub_31E858(a1, (char *)&word_419FC8);
        return v2;
      case 'H':
        ptr = 0;
        v21 = 0;
        v20 = 0;
        v12 = sub_3200E0(&ptr, a2 + 1);
        if ( ptr == v20 )
        {
          v2 = (unsigned __int8 *)sub_3200E0(a1, v12);
          sub_31E858(a1, "[");
        }
        else
        {
          v13 = v20 - (_BYTE *)ptr;
          v2 = (unsigned __int8 *)sub_3200E0(a1, v12);
          sub_31E858(a1, "[");
          if ( v13 )
            sub_31EC14(__SPAIR64__((unsigned int)ptr, a1), v13);
        }
        sub_31E858(a1, (char *)&word_419FC8);
        v8 = ptr;
        if ( !ptr )
          return v2;
LABEL_19:
        free(v8);
        return v2;
      case 'N':
        v18 = a2[1];
        if ( v18 == 103 )
        {
          v10 = "inout(";
          v11 = v2 + 2;
LABEL_26:
          sub_31E858(a1, v10);
          v2 = (unsigned __int8 *)sub_3200E0(a1, v11);
          sub_31E858(a1, ")");
          return v2;
        }
        if ( v18 == 104 )
        {
          v10 = "__vector(";
          v11 = v2 + 2;
          goto LABEL_26;
        }
        break;
      case 'O':
        v10 = "shared(";
        v11 = v2 + 1;
        goto LABEL_26;
      case 'P':
        v2 = a2 + 1;
        switch ( a2[1] )
        {
          case 'F':
          case 'R':
          case 'U':
          case 'V':
          case 'W':
          case 'Y':
            goto LABEL_14;
          default:
            v2 = (unsigned __int8 *)sub_3200E0(a1, v2);
            sub_31E858(a1, "*");
            break;
        }
        return v2;
      case 'a':
        v2 = a2 + 1;
        sub_31E858(a1, "char");
        return v2;
      case 'b':
        v2 = a2 + 1;
        sub_31E858(a1, "bool");
        return v2;
      case 'c':
        v2 = a2 + 1;
        sub_31E858(a1, "creal");
        return v2;
      case 'd':
        v2 = a2 + 1;
        sub_31E858(a1, "double");
        return v2;
      case 'e':
        v2 = a2 + 1;
        sub_31E858(a1, "real");
        return v2;
      case 'f':
        v2 = a2 + 1;
        sub_31E858(a1, "float");
        return v2;
      case 'g':
        v2 = a2 + 1;
        sub_31E858(a1, "byte");
        return v2;
      case 'h':
        v2 = a2 + 1;
        sub_31E858(a1, "ubyte");
        return v2;
      case 'i':
        v2 = a2 + 1;
        sub_31E858(a1, "int");
        return v2;
      case 'j':
        v2 = a2 + 1;
        sub_31E858(a1, "ireal");
        return v2;
      case 'k':
        v2 = a2 + 1;
        sub_31E858(a1, "uint");
        return v2;
      case 'l':
        v2 = a2 + 1;
        sub_31E858(a1, "long");
        return v2;
      case 'm':
        v2 = a2 + 1;
        sub_31E858(a1, "ulong");
        return v2;
      case 'n':
        v2 = a2 + 1;
        sub_31E858(a1, "none");
        return v2;
      case 'o':
        v2 = a2 + 1;
        sub_31E858(a1, "ifloat");
        return v2;
      case 'p':
        v2 = a2 + 1;
        sub_31E858(a1, "idouble");
        return v2;
      case 'q':
        v2 = a2 + 1;
        sub_31E858(a1, "cfloat");
        return v2;
      case 'r':
        v2 = a2 + 1;
        sub_31E858(a1, "cdouble");
        return v2;
      case 's':
        v2 = a2 + 1;
        sub_31E858(a1, "short");
        return v2;
      case 't':
        v2 = a2 + 1;
        sub_31E858(a1, "ushort");
        return v2;
      case 'u':
        v2 = a2 + 1;
        sub_31E858(a1, "wchar");
        return v2;
      case 'v':
        v2 = a2 + 1;
        sub_31E858(a1, "void");
        return v2;
      case 'w':
        v2 = a2 + 1;
        sub_31E858(a1, "dchar");
        return v2;
      case 'x':
        v10 = "const(";
        v11 = v2 + 1;
        goto LABEL_26;
      case 'y':
        v10 = "immutable(";
        v11 = v2 + 1;
        goto LABEL_26;
      case 'z':
        v9 = a2[1];
        if ( v9 == 105 )
        {
          v2 = a2 + 2;
          sub_31E858(a1, "cent");
        }
        else
        {
          if ( v9 != 107 )
            return 0;
          v2 = a2 + 2;
          sub_31E858(a1, "ucent");
        }
        return v2;
      default:
        return 0;
    }
  }
  return 0;
}
