int sub_10A4B4()
{
  int v0; // r9
  int v1; // r5
  char **v2; // r4
  int v3; // r6
  const char *v4; // r7
  int result; // r0
  const char *v6; // r0
  int v7; // lr
  const char *v8; // r5
  void *v9; // r0
  void *v10; // r4
  _DWORD *v11; // r2
  unsigned __int8 *v12; // r4
  _BYTE *v13; // r5
  unsigned __int8 *v14; // r0
  int v15; // r3
  char **v16; // r0
  char *v17; // r5
  _DWORD *v18; // r0
  _BYTE *v19; // r3
  int v20; // r2
  unsigned __int8 *v21; // r0
  int v22; // r0
  _BYTE *v23; // [sp+4h] [bp-74h] BYREF
  void *ptr[2]; // [sp+8h] [bp-70h] BYREF
  _DWORD v25[4]; // [sp+10h] [bp-68h] BYREF
  char *s2; // [sp+20h] [bp-58h] BYREF
  int v27; // [sp+24h] [bp-54h]
  _DWORD v28[4]; // [sp+28h] [bp-50h] BYREF
  void *v29; // [sp+38h] [bp-40h] BYREF
  int v30; // [sp+3Ch] [bp-3Ch]
  _DWORD v31[11]; // [sp+40h] [bp-38h] BYREF
  int v32; // [sp+6Ch] [bp-Ch]

  v1 = -1;
  v2 = &off_432D10;
  v3 = 0;
  v4 = (const char *)dword_4872B0;
  while ( 1 )
  {
    result = strcmp(v4, *(v2 - 3));
    if ( !result )
      break;
    v2 += 3;
    v1 = (int)*(v2 - 2);
    ++v3;
    if ( !v1 )
    {
      v6 = (const char *)sub_94700(
                           (int)"demangle.c",
                           134,
                           "%s: Assertion `%s' failed.",
                           "void set_demangling_command(const char*, int, cmd_list_element*)",
                           "dem->demangling_style != unknown_demangling");
      v31[5] = v2;
      v31[6] = 0;
      v31[7] = v3;
      v31[8] = v4;
      v31[9] = &dword_4872B0;
      v31[10] = v0;
      v32 = v7;
      v8 = v6;
      if ( v6 )
      {
        ptr[0] = v25;
        v9 = (void *)strlen(v6);
        v10 = v9;
        v29 = v9;
        if ( (unsigned int)v9 > 0xF )
        {
          v18 = (_DWORD *)sub_33B2BC(ptr, &v29, 0);
          ptr[0] = v18;
          v25[0] = v29;
          goto LABEL_23;
        }
        if ( v9 == (void *)1 )
        {
          v11 = v25;
          LOBYTE(v25[0]) = *v8;
LABEL_9:
          ptr[1] = v10;
          *((_BYTE *)v10 + (_DWORD)v11) = 0;
          v12 = (unsigned __int8 *)ptr[0];
          v27 = 0;
          LOBYTE(v28[0]) = 0;
          s2 = (char *)v28;
          if ( *(_BYTE *)ptr[0] != 45 )
          {
            if ( *(_BYTE *)ptr[0] )
            {
LABEL_15:
              v16 = off_46D5A4[0];
              goto LABEL_16;
            }
LABEL_40:
            sub_946E0("Usage: demangle [-l language] [--] name");
          }
          while ( 2 )
          {
            v13 = sub_93610(v12);
            v23 = v13;
            if ( strncmp((const char *)v12, "-l", v13 - v12) )
            {
              if ( strncmp((const char *)v12, "--", v13 - v12) )
              {
                sub_5B05C((int *)&v29, (int *)&v23);
                sub_946E0("Unrecognized option '%s' to demangle command.  Try \"help demangle\".", (const char *)v29);
              }
              v14 = (unsigned __int8 *)sub_9360C(v13);
              v15 = *v14;
              v12 = v14;
LABEL_13:
              if ( v15 )
              {
                if ( !v27 )
                  goto LABEL_15;
                v22 = sub_1943DC(s2);
                if ( !v22 )
                  sub_946E0("Unknown language \"%s\"", s2);
                v16 = (char **)sub_194438(v22);
LABEL_16:
                v17 = (char *)sub_1944B0(v16, v12, 3);
                if ( v17 )
                {
                  sub_259F10("%s\n", v17);
                  free(v17);
                  if ( s2 != (char *)v28 )
                    sub_339E64(s2);
                  if ( ptr[0] != v25 )
                    sub_339E64(ptr[0]);
                  __asm { POP             {R4-R9,PC} }
                }
                sub_946E0("Can't demangle \"%s\"", (const char *)v12);
              }
              goto LABEL_40;
            }
            sub_5B05C((int *)&v29, (int *)&v23);
            v19 = s2;
            if ( v29 == v31 )
            {
              sub_33B48C(&s2, &v29);
              v19 = v29;
            }
            else
            {
              if ( s2 == (char *)v28 )
              {
                s2 = (char *)v29;
                v27 = v30;
                v28[0] = v31[0];
              }
              else
              {
                s2 = (char *)v29;
                v27 = v30;
                v20 = v28[0];
                v28[0] = v31[0];
                if ( v19 )
                {
                  v29 = v19;
                  v31[0] = v20;
                  goto LABEL_29;
                }
              }
              v29 = v31;
              v19 = v31;
            }
LABEL_29:
            v30 = 0;
            *v19 = 0;
            if ( v29 != v31 )
              sub_339E64(v29);
            v21 = (unsigned __int8 *)sub_9360C(v23);
            v15 = *v21;
            v12 = v21;
            if ( v15 != 45 )
              goto LABEL_13;
            continue;
          }
        }
        if ( v9 )
        {
          v18 = v25;
LABEL_23:
          memcpy(v18, v8, (size_t)v10);
        }
      }
      else
      {
        v29 = 0;
        ptr[0] = v25;
      }
      v10 = v29;
      v11 = ptr[0];
      goto LABEL_9;
    }
  }
  dword_471498 = v1;
  dword_4872B0 = *(_DWORD *)(dword_4872B4 + 4 * v3);
  return result;
}
