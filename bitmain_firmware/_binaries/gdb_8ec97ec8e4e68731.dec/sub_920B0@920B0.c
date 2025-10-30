void *sub_920B0(int *a1, char *a2, ...)
{
  unsigned __int8 *v3; // r10
  int v4; // r3
  const char *v5; // r5
  bool v6; // zf
  unsigned __int8 *v7; // r4
  int v8; // r3
  void *result; // r0
  char *v10; // r10
  char *v11; // kr00_4
  unsigned __int8 *v12; // r11
  _DWORD *v13; // r3
  const char *v14; // r1
  int v15; // r4
  size_t v16; // r2
  char *v17; // r4
  size_t v18; // r2
  _DWORD *v19; // r3
  const char *v20; // r1
  _DWORD *v21; // r3
  const char *v22; // r1
  _DWORD *v23; // r3
  _DWORD *v24; // [sp+4h] [bp-3Ch]
  char *v25; // [sp+8h] [bp-38h] BYREF
  char v26; // [sp+10h] [bp-30h] BYREF
  char s[68]; // [sp+20h] [bp-20h] BYREF
  va_list varg_r2; // [sp+68h] [bp+28h] BYREF

  va_start(varg_r2, a2);
  v3 = (unsigned __int8 *)a2;
  va_copy(v24, varg_r2);
  v4 = (unsigned __int8)*a2;
  if ( *a2 )
  {
    v5 = a2;
    do
    {
      v6 = v4 == 37;
      v7 = v3 + 1;
      v8 = v3[1];
      if ( !v6 )
      {
        if ( !v3[1] )
          break;
        while ( 1 )
        {
          v6 = v8 == 37;
          v8 = v7[1];
          if ( v6 )
            break;
          ++v7;
          if ( !v8 )
            goto LABEL_7;
        }
        v3 = v7++;
      }
      if ( !v8 )
        break;
      switch ( v8 )
      {
        case 'd':
          v14 = "%d";
          v13 = v24;
          goto LABEL_18;
        case 'l':
          v12 = v3 + 2;
          switch ( v3[2] )
          {
            case 'd':
              v20 = "%ld";
              v19 = v24;
              goto LABEL_31;
            case 'l':
              v12 = v3 + 3;
              switch ( v3[3] )
              {
                case 'd':
                  v22 = "%lld";
                  v21 = v24;
                  goto LABEL_39;
                case 'o':
                  v21 = v24;
                  v22 = "%llo";
                  goto LABEL_39;
                case 'u':
                  v21 = v24;
                  v22 = "%llu";
                  goto LABEL_39;
                case 'x':
                  v21 = v24;
                  v22 = "%llx";
LABEL_39:
                  v10 = s;
                  v23 = (_DWORD *)(((unsigned int)v21 + 7) & 0xFFFFFFF8);
                  v24 = v23 + 2;
                  sprintf(s, v22, *v23, v23[1]);
                  goto LABEL_19;
                default:
                  v3 += 4;
                  goto LABEL_15;
              }
            case 'o':
              v20 = "%lo";
              v19 = v24;
              goto LABEL_31;
            case 'u':
              v20 = "%lu";
              v19 = v24;
              goto LABEL_31;
            case 'x':
              v19 = v24;
              v20 = "%lx";
LABEL_31:
              v10 = s;
              v24 = v19 + 1;
              sprintf(s, v20, *v19);
              goto LABEL_19;
            default:
              v3 += 3;
              goto LABEL_15;
          }
        case 'o':
          v13 = v24;
          v14 = "%o";
          goto LABEL_18;
        case 's':
          v11 = va_arg(v24, char *);
          v10 = v11;
          if ( !v11 )
            goto LABEL_14;
          v12 = v7;
          goto LABEL_19;
        case 'u':
          v14 = "%u";
          v13 = v24;
          goto LABEL_18;
        case 'x':
          v14 = "%x";
          v13 = v24;
LABEL_18:
          v10 = s;
          v24 = v13 + 1;
          v12 = v7;
          sprintf(s, v14, *v13);
LABEL_19:
          v15 = v7 - (unsigned __int8 *)v5;
          v16 = v15 - 1;
          if ( v15 != 1 )
            sub_91FD0(a1, v5, v16);
          sub_99FEC(&v25, v10, v16);
          v17 = v25;
          v18 = strlen(v25);
          if ( v18 )
          {
            sub_91FD0(a1, v25, v18);
            v17 = v25;
          }
          v3 = v12 + 1;
          if ( v17 != &v26 )
            sub_339E64(v17);
          v5 = (const char *)(v12 + 1);
          break;
        default:
LABEL_14:
          v3 = v7 + 1;
          v12 = v7;
          break;
      }
LABEL_15:
      v4 = v12[1];
    }
    while ( v12[1] );
  }
  else
  {
    v5 = a2;
  }
LABEL_7:
  result = (void *)strlen(v5);
  if ( result )
    return sub_91FD0(a1, v5, (size_t)result);
  return result;
}
