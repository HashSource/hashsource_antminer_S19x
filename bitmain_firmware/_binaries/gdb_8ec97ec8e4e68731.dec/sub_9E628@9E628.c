char *__fastcall sub_9E628(const char *a1, int a2)
{
  const char **v3; // r0
  char *v4; // r8
  size_t v5; // r6
  int v6; // r5
  size_t v7; // r4
  char *v8; // r2
  int v9; // r3
  bool v10; // zf
  bool v11; // zf
  int v12; // t1
  size_t v14; // r0
  _BOOL4 v15; // r3
  char v16[4]; // [sp+0h] [bp-24h] BYREF
  size_t n; // [sp+4h] [bp-20h] BYREF

  v3 = (const char **)sub_C23B0(a2);
  if ( v3 )
  {
    v4 = (char *)*v3;
    n = sub_9E5E8(*v3);
    v5 = strlen(a1) + 8 + n;
    sub_9DFAC((unsigned __int8 *)v4, (int *)&n);
    sub_9AD80((int)v4, (int *)&n);
    v6 = n;
    v7 = n - 1;
    v8 = &v4[n - 1];
    if ( (int)(n - 1) <= 0 )
    {
      v15 = n == 1;
      if ( v4[v7] != 88 )
        v15 = 1;
      if ( !v15 )
      {
LABEL_19:
        if ( isalnum((unsigned __int8)*(v8 - 1)) )
        {
          v6 = v7;
          n = v7;
        }
        if ( v6 <= 5 )
          goto LABEL_15;
        goto LABEL_13;
      }
    }
    else
    {
      v9 = (unsigned __int8)v4[v7];
      v10 = v9 == 110;
      if ( v9 != 110 )
        v10 = v9 == 98;
      if ( v10 )
      {
        while ( 1 )
        {
          --v7;
          v12 = (unsigned __int8)*--v8;
          v9 = v12;
          if ( !v7 )
            break;
          v11 = v9 == 98;
          if ( v9 != 98 )
            v11 = v9 == 110;
          if ( !v11 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        if ( v9 == 88 )
        {
          v8 = &v4[v7];
          goto LABEL_19;
        }
      }
    }
    if ( (int)n <= 5 )
    {
LABEL_15:
      strncpy(v16, v4, v6);
      sub_93170(&v16[v6], v5 - v6, "__%s___XR", a1);
      return sub_9D20C(v16);
    }
LABEL_13:
    if ( v4 == (char *)sub_338BD4(v4, "_ada_") )
    {
      v4 += 5;
      v6 -= 5;
      n = v6;
    }
    goto LABEL_15;
  }
  v14 = strlen(a1);
  sub_93170(v16, v14 + 6, "%s___XR", a1);
  return sub_9D20C(v16);
}
