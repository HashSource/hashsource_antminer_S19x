int __fastcall sub_965C4(_DWORD *a1, int a2)
{
  size_t v2; // r4
  unsigned int v4; // r0
  size_t v5; // r10
  int v6; // r7
  int v7; // r0
  bool v8; // zf
  int v9; // r8
  int v10; // r3
  int v11; // r3
  int v12; // r0
  int v13; // r5
  _DWORD *v14; // r0
  _DWORD *v16; // r0
  int v18; // [sp+Ch] [bp-190h]
  char s[132]; // [sp+14h] [bp-188h] BYREF
  _BYTE v20[260]; // [sp+98h] [bp-104h] BYREF

  v2 = a1[304];
  if ( v2 )
  {
    memset(s, 0, 0x81u);
    v4 = ((int (__fastcall *)(_DWORD *, _DWORD, char *, int, _BYTE *, int))v2)(
           a1,
           *(_DWORD *)(a1[285] + 400),
           s,
           128,
           v20,
           256);
    v2 = v4;
    if ( v4 > 0x100 )
    {
      v9 = 0;
      v2 = 256;
      v5 = 0;
      sub_95494(a1, 40, 407, 68, (int)"ssl/statem/statem_clnt.c", 2915);
      v6 = 0;
      v13 = 0;
    }
    else if ( v4 )
    {
      v5 = strlen(s);
      if ( v5 > 0x80 )
      {
        v9 = 0;
        v14 = a1;
        v6 = 0;
        v13 = 0;
        sub_95494(v14, 80, 407, 68, (int)"ssl/statem/statem_clnt.c", 2928);
      }
      else
      {
        v6 = sub_E9E68(v20, v2, "ssl/statem/statem_clnt.c", 2932);
        v7 = sub_E9E3C(s, "ssl/statem/statem_clnt.c", 2933);
        v8 = v7 == 0;
        if ( v7 )
          v8 = v6 == 0;
        v9 = v7;
        v10 = v8;
        v18 = v10;
        if ( v8 )
        {
          v16 = a1;
          v13 = 0;
          sub_95494(v16, 80, 407, 65, (int)"ssl/statem/statem_clnt.c", 2936);
        }
        else
        {
          CRYPTO_free(*(_DWORD *)(a1[31] + 600), "ssl/statem/statem_clnt.c", 2940);
          v11 = a1[31];
          v12 = a1[285];
          *(_DWORD *)(v11 + 600) = v6;
          *(_DWORD *)(v11 + 604) = v2;
          CRYPTO_free(*(_DWORD *)(v12 + 404), "ssl/statem/statem_clnt.c", 2944);
          *(_DWORD *)(a1[285] + 404) = v9;
          v9 = sub_A8544(a2, s, v5, 2);
          if ( v9 )
          {
            v9 = v18;
            v13 = 1;
            v6 = v18;
          }
          else
          {
            v6 = 0;
            sub_95494(a1, 80, 407, 68, (int)"ssl/statem/statem_clnt.c", 2950);
            v13 = 0;
          }
        }
      }
    }
    else
    {
      v9 = 0;
      sub_95494(a1, 40, 407, 223, (int)"ssl/statem/statem_clnt.c", 2921);
      v6 = v2;
      v5 = v2;
      v13 = v2;
    }
  }
  else
  {
    v9 = 0;
    v6 = 0;
    sub_95494(a1, 80, 407, 224, (int)"ssl/statem/statem_clnt.c", 2903);
    v5 = 0;
    v13 = 0;
  }
  sub_E07F8((int)v20, v2);
  sub_E07F8((int)s, 0x81u);
  sub_E0758(v6, v2, (size_t)"ssl/statem/statem_clnt.c");
  sub_E0758(v9, v5, (size_t)"ssl/statem/statem_clnt.c");
  return v13;
}
