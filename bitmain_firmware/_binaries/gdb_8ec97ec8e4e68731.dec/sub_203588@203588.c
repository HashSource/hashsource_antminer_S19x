void __fastcall sub_203588(int a1, int *a2, int a3)
{
  __int16 *v3; // r9
  int v5; // r4
  int v6; // r0
  unsigned int *v7; // r3
  unsigned int v8; // r10
  signed int v9; // r8
  const char *v10; // r5
  const char *i; // r3
  unsigned int v12; // r1
  size_t v13; // r6
  _BYTE *v14; // r4
  int v15; // r3
  bool v16; // zf
  size_t v17; // r0
  char *v18; // r0
  __int16 *v19; // r1
  char **v20; // r4
  char **v21; // r5
  char *v22; // t1
  char v23; // r6
  int v24; // r0
  char *v25; // r5
  int v26; // r4
  int v27; // r3
  bool v28; // zf
  unsigned int *v29; // r0
  unsigned int v30; // r3
  unsigned int v31; // r2
  int *v32; // r0
  int v33; // r4
  _DWORD *v34; // r0
  int v35; // r0
  size_t v36; // [sp+Ch] [bp-88h]
  void *v37; // [sp+10h] [bp-84h]
  __int16 v38; // [sp+20h] [bp-74h] BYREF
  unsigned int *v39; // [sp+24h] [bp-70h] BYREF
  _DWORD v40[4]; // [sp+28h] [bp-6Ch] BYREF
  int v41; // [sp+38h] [bp-5Ch]

  v3 = (__int16 *)*a2;
  v39 = 0;
  if ( a1 )
  {
    if ( a3 )
    {
      v40[0] = 0;
      sub_25B0DC(v40, a1);
      v20 = (char **)v40[0];
      v21 = &v20[sub_31E100(v40[0])];
      while ( v21 != v20 )
      {
        v22 = *v20++;
        sub_98324((int *)&v39, v22);
      }
      sub_31DAD0(v40[0]);
    }
    else
    {
      v5 = sub_327254(a1);
      v29 = sub_99FE0(v39, 1);
      v30 = *v29;
      v31 = v29[1];
      v39 = v29;
      if ( v31 <= v30 )
      {
        sub_94700(
          (int)"source.c",
          482,
          "%s: Assertion `%s' failed.",
          "char** VEC_char_ptr_quick_push(VEC_char_ptr*, char_ptr, const char*, unsigned int)",
          "quick_push");
        v35 = sub_31DAD0(v40[0]);
        sub_338FFC(v35);
      }
      *v29 = v30 + 1;
      v29[v30 + 2] = v5;
    }
    v6 = sub_25B314();
    v7 = v39;
    v37 = (void *)v6;
    if ( v39 && *v39 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = (const char *)v7[v8 + 2];
        for ( i = &v10[strlen(v10)]; ; --i )
        {
          v12 = (unsigned int)i;
          if ( *v10 == 47 && i <= v10 + 1 )
            break;
          if ( *(i - 1) != 47 )
            break;
        }
        *i = 0;
        if ( i <= v10 || *(i - 1) != 46 )
          goto LABEL_56;
        if ( i - v10 == 1 )
        {
LABEL_66:
          v10 = (const char *)dword_48A4F8;
        }
        else
        {
          if ( i <= v10 + 1 || *(i - 2) != 47 )
            goto LABEL_56;
          if ( i - v10 != 2 )
          {
            while ( 1 )
            {
              *(_BYTE *)(v12 - 2) = 0;
              v12 -= 2;
              if ( v12 <= (unsigned int)v10 || *(_BYTE *)(v12 - 1) != 46 )
                break;
              if ( v12 - (_DWORD)v10 == 1 )
                goto LABEL_66;
              if ( v12 <= (unsigned int)(v10 + 1) || *(_BYTE *)(v12 - 2) != 47 )
                break;
              if ( v12 - (_DWORD)v10 == 2 )
                goto LABEL_20;
            }
LABEL_56:
            v27 = *(unsigned __int8 *)v10;
            if ( v27 == 126 )
            {
              v10 = (const char *)sub_29B910(v10);
            }
            else
            {
              v28 = v27 == 47;
              if ( v27 != 47 )
                v28 = v27 == 36;
              if ( v28 )
                v10 = sub_93330(v10, v12 - (_DWORD)v10);
              else
                v10 = (const char *)sub_31E27C(dword_48A4F8, &word_398974, v10);
            }
            sub_9253C((int)sub_202C9C, (int)v10);
            if ( *v10 != 36 )
            {
              if ( _xstat64(3, v10, v40) < 0 )
              {
                v32 = _errno_location();
                v33 = *v32;
                v34 = (_DWORD *)sub_242FB4(v32);
                sub_2594B0(*v34, "Warning: ");
                sub_259504(v10, v33);
              }
              else if ( (v41 & 0xF000) != 0x4000 )
              {
                sub_946B0("%s is not a directory.", v10);
              }
            }
            goto LABEL_21;
          }
LABEL_20:
          *(_BYTE *)(v12 - 1) = 0;
        }
LABEL_21:
        v13 = strlen(v10);
        v14 = (_BYTE *)*a2;
        v36 = v13 + 1;
        while ( 1 )
        {
          if ( !j_strncmp(v14, v10, v13) )
          {
            v15 = (unsigned __int8)v14[v13];
            v16 = v15 == 58;
            if ( v15 != 58 )
              v16 = v15 == 0;
            if ( v16 )
            {
              if ( *a2 < (unsigned int)v14 )
                --v14;
              if ( (int)&v14[-*a2] < v9 )
                goto LABEL_39;
              v17 = strlen(&v14[v36]);
              memmove(v14, &v14[v36], v17 + 1);
            }
          }
          v18 = strchr(v14, 58);
          if ( !v18 )
            break;
          v14 = v18 + 1;
        }
        v38 = 58;
        if ( !v9 )
        {
          if ( *(_BYTE *)v3 )
            v19 = &v38;
          else
            v19 = v3;
          *a2 = sub_31E27C(v10, v19, v3);
          v9 = strlen(v10);
LABEL_38:
          free(v3);
          v3 = (__int16 *)*a2;
          goto LABEL_39;
        }
        v23 = *((_BYTE *)v3 + v9);
        *((_BYTE *)v3 + v9) = 0;
        v24 = sub_31E27C(v3, &v38, v10);
        *((_BYTE *)v3 + v9) = v23;
        v25 = (char *)v24;
        v26 = sub_31E27C(v24, "", (char *)v3 + v9);
        *a2 = v26;
        v9 = strlen(v25);
        free(v25);
        if ( v3 )
          goto LABEL_38;
        v3 = (__int16 *)v26;
LABEL_39:
        v7 = v39;
        ++v8;
      }
      while ( v39 && v8 < *v39 );
    }
    sub_92620(v37);
  }
}
