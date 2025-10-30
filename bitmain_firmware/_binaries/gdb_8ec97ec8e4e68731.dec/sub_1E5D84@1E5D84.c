int __fastcall sub_1E5D84(
        const char *a1,
        const char *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _DWORD *a8)
{
  int v11; // r0
  unsigned __int8 *v12; // r0
  int v13; // r3
  unsigned __int8 **v14; // r4
  void *v15; // r9
  const char *v16; // r0
  char *v17; // r9
  size_t v18; // r10
  char *v19; // r11
  int v20; // r3
  char *v21; // r0
  size_t v22; // r0
  int v23; // r0
  int v24; // r11
  int v25; // r9
  const char *v26; // r12
  int v27; // r2
  bool v28; // zf
  char v29; // r3
  int v30; // r3
  int v31; // r0
  int v32; // r6
  __int64 v34; // r8
  int v35; // r0
  __int64 v36; // [sp+10h] [bp-Ch]

  v11 = sub_16F654((int)a1);
  v12 = (unsigned __int8 *)((int (__fastcall *)(int))loc_1E2770)(v11);
  v13 = a8[2];
  if ( v13 != 1 )
  {
    if ( !v13 )
      goto LABEL_5;
    if ( v13 != 2 )
    {
      ((void (__fastcall *)(unsigned __int8 *))loc_162E4)(v12);
      goto LABEL_39;
    }
    if ( a8[3] != 2 )
    {
LABEL_5:
      v14 = (unsigned __int8 **)dword_488C94;
      v15 = *(void **)(dword_488C94 + 108);
      if ( v15 )
      {
        if ( !strcmp(a1, *(const char **)(dword_488C94 + 108)) )
        {
          v16 = "";
          if ( a2 )
            v16 = a2;
          if ( !strcmp(v16, (const char *)v14[28]) && *((_QWORD *)v14 + 15) == a5 )
            return 0;
        }
        free(v15);
        v12 = v14[28];
        if ( v12 )
          free(v12);
        v14[27] = 0;
        v14[28] = 0;
      }
      v36 = sub_1E2890((int)v12) - 5;
      if ( a6 < v36 )
        v36 = a6;
      v17 = (char *)*v14;
      v18 = sub_1E2890(a6) - 4;
      if ( !a2 )
        a2 = "";
      v19 = sub_989F0(a5, SHIDWORD(a5), 8, (int)"");
      v21 = sub_989F0(v36, SHIDWORD(v36), 8, v20);
      snprintf(v17, v18, "qXfer:%s:read:%s:%s,%s", a1, a2, v19, v21);
      v22 = strlen((const char *)*v14);
      if ( sub_1E51C4((int)*v14, v22) >= 0 )
      {
        **v14 = 0;
        v23 = sub_1E4EB8((char **)v14, (size_t *)v14 + 1, 0, 0, 0);
        v24 = v23 >> 31;
        v25 = v23;
        if ( v23 >> 31 != -1 && sub_1E1768(*v14, a8) == 1 )
        {
          v26 = (const char *)*v14;
          v27 = **v14;
          if ( (unsigned int)(v27 - 108) <= 1 )
          {
            v28 = v24 == 0;
            if ( !v24 )
              v28 = v25 == 1;
            v29 = v28;
            if ( v27 == 109 )
              v30 = v29 & 1;
            else
              v30 = 0;
            if ( v30 )
              sub_946E0("Remote qXfer reply contained no data.");
            v31 = sub_996E8((unsigned __int8 *)v26 + 1, v25 - 1, a3, v36);
            v32 = v31;
            if ( **v14 == 108 )
            {
              v34 = a5 + v31;
              if ( v34 )
              {
                v14[27] = (unsigned __int8 *)sub_327254(a1);
                v35 = sub_327254(a2);
                *((_QWORD *)v14 + 15) = v34;
                v14[28] = (unsigned __int8 *)v35;
              }
            }
            if ( v32 )
            {
              *a7 = v32;
              return 1;
            }
            return 0;
          }
LABEL_39:
          sub_946E0("Unknown remote qXfer reply: %s", v26);
        }
      }
    }
  }
  return -1;
}
