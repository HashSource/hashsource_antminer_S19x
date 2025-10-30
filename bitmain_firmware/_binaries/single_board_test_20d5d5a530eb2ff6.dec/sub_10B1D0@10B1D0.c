int __fastcall sub_10B1D0(_DWORD *a1, int a2)
{
  int v4; // r6
  void *v5; // r0
  _DWORD *v6; // r0
  int v7; // r8
  char **v8; // r4
  __int64 v10; // r0
  int v11; // r2
  int v12; // r5
  __int64 v13; // r0
  int v14; // r2
  char **v15; // r7
  int v16; // r3
  _DWORD *v17; // r4
  char *v18; // r0
  int v19; // r2
  void *v20; // r0
  int v21; // r2
  void *v22; // r0
  char *v23; // r10
  int v24; // r4
  int v25; // r4
  bool v26; // cc
  int v27; // r1
  char **v28; // r11
  char **v29; // r0
  char *v30; // r1
  char *v31; // r3
  char *v32; // r0
  char *v33; // r10
  char *v34; // r0
  char *v35; // r0
  int v36; // r4
  int v37; // r1
  char **v38; // r5
  char *v39; // r3
  void *v40; // r11
  int v41; // [sp+0h] [bp-1Ch]
  int v42; // [sp+4h] [bp-18h]
  char *s2; // [sp+10h] [bp-Ch]

  v4 = sub_10BFCC(a1);
  v5 = sub_B7820();
  v6 = sub_B655C((int)v5);
  v42 = (int)v6;
  if ( v6 && sub_B6ECC((int)v6, 108, 3, a2) > 0 )
  {
    v7 = sub_10C634(v42, 6);
    if ( v7 )
    {
      if ( a1[2] )
        s2 = *sub_10ACE4(0);
      else
        s2 = 0;
      v12 = 0;
      v41 = 4;
      while ( v12 < sub_10C010(*(_DWORD *)(v7 + 4), HIDWORD(v10), v11) )
      {
        v10 = sub_10C01C(*(_DWORD *)(v7 + 4), v12);
        v15 = (char **)v10;
        v16 = **(unsigned __int8 **)v10;
        if ( v16 == 73 )
        {
          v17 = CRYPTO_malloc((void *)0xC);
          if ( !v17 )
          {
            v8 = 0;
            goto LABEL_4;
          }
          v18 = sub_E9E3C(v15[3]);
          *v17 = v18;
          if ( !v18 )
          {
            v40 = v17;
            goto LABEL_52;
          }
          v20 = sub_10B088(a1[1], v15[1], v19);
          v17[2] = v20;
          if ( !v20 || (v22 = sub_10B088(a1[1], v15[2], v21), (v17[1] = v22) == 0) || !sub_10BA90(v4, v17, 0) )
          {
            v18 = (char *)*v17;
            v40 = v17;
LABEL_52:
            v8 = 0;
            CRYPTO_free(v18);
            CRYPTO_free(v40);
            goto LABEL_4;
          }
          if ( a1[2] )
            s2 = v15[3];
        }
        else if ( v16 == 86 )
        {
          v23 = *(char **)(v10 + 16);
          if ( v4 )
          {
            v24 = *(_DWORD *)(v10 + 16);
            if ( v23 )
            {
              v25 = 0;
              while ( 1 )
              {
                v26 = sub_10C010(v4, HIDWORD(v10), v11) <= v25;
                v27 = v25++;
                if ( v26 )
                  break;
                v10 = sub_10C01C(v4, v27);
                v28 = (char **)v10;
                if ( (_DWORD)v10 && !strcmp(*(const char **)v10, v23) )
                  goto LABEL_31;
              }
            }
            else
            {
              while ( v24 < sub_10C010(v4, HIDWORD(v10), v11) )
              {
                v10 = sub_10C01C(v4, v24);
                if ( (_DWORD)v10 )
                {
                  v28 = (char **)v10;
                  goto LABEL_31;
                }
                ++v24;
              }
            }
          }
          v28 = sub_10ACE4(v23);
          if ( v28 )
          {
LABEL_31:
            v29 = (char **)CRYPTO_malloc((void *)0x18);
            v8 = v29;
            if ( !v29 )
              goto LABEL_39;
            v30 = v28[1];
            v31 = v28[2];
            v29[1] = 0;
            v29[3] = v30;
            v29[4] = v31;
            v29[2] = 0;
            *v29 = 0;
            v29[5] = 0;
            v32 = v15[3];
            v33 = v15[5];
            if ( v32 )
            {
              v34 = sub_E9E3C(v32);
              *v8 = v34;
              if ( !v34 )
                goto LABEL_39;
            }
            if ( v33 )
            {
              v35 = sub_E9E3C(v33);
              v8[5] = v35;
              if ( !v35 )
              {
LABEL_39:
                v41 = 4;
                goto LABEL_4;
              }
            }
            if ( !sub_10AF98(v8 + 1, (int *)v8 + 2, v15[2], v15[1]) )
            {
              v41 = 2;
              goto LABEL_4;
            }
            v41 = 2;
            if ( !sub_10BA90(*a1, v8, 0) )
              goto LABEL_4;
          }
        }
        ++v12;
      }
      if ( s2 )
      {
        if ( v4 )
        {
          v36 = 0;
          while ( 1 )
          {
            v26 = v36 < sub_10C010(v4, HIDWORD(v13), v14);
            v37 = v36++;
            if ( !v26 )
              break;
            v13 = sub_10C01C(v4, v37);
            v38 = (char **)v13;
            if ( (_DWORD)v13 && !strcmp(*(const char **)v13, s2) )
              goto LABEL_49;
          }
        }
        v38 = sub_10ACE4(s2);
        if ( v38 )
        {
LABEL_49:
          v8 = 0;
          v39 = v38[2];
          v41 = 0;
          a1[3] = v38[1];
          a1[4] = v39;
        }
        else
        {
          v8 = 0;
          v41 = 2;
        }
      }
      else
      {
        v41 = 0;
        v8 = 0;
      }
    }
    else
    {
      v8 = 0;
      v41 = 1;
    }
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v41 = 3;
  }
LABEL_4:
  SRP_user_pwd_free((int)v8);
  sub_10CB40(v7);
  sub_B717C(v42);
  sub_10BDB4(v4);
  return v41;
}
