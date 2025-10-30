int __fastcall sub_8D2C4(_DWORD *a1)
{
  unsigned int v1; // r4
  int v4; // r7
  int v5; // r0
  int v6; // r5
  _DWORD *v7; // r1
  int v8; // r6
  int (*v9)(); // r2
  int (*v10)(); // r6
  int v11; // r1
  int v12; // r2
  int v13; // r0
  _DWORD v14[2]; // [sp+14h] [bp-14h] BYREF
  unsigned int v15; // [sp+1Ch] [bp-Ch] BYREF
  char *s; // [sp+20h] [bp-8h] BYREF
  int v17; // [sp+24h] [bp-4h] BYREF

  v1 = 0;
  v14[0] = 0;
  if ( a1 )
  {
    v14[0] = "system_default";
    if ( sub_BC274("system_default") && (v4 = sub_BC250(v14[1], v14, &v15), v5 = sub_AABA0(), (v6 = v5) != 0) )
    {
      v7 = a1;
      v8 = *a1;
      sub_AAF6C(v5, v7);
      v9 = *(int (**)())(v8 + 24);
      v10 = *(int (**)())(v8 + 28);
      if ( v9 == ssl_undefined_function )
        v11 = 6;
      else
        v11 = 14;
      if ( v9 == ssl_undefined_function )
        v12 = 2;
      else
        v12 = 10;
      if ( v10 == ssl_undefined_function )
        v11 = v12;
      sub_AAEC0(v6, v11, v12);
      if ( v15 )
      {
        while ( 1 )
        {
          sub_BC2BC(v4, v1++, &s, &v17);
          v13 = sub_AA8D4(v6, s);
          if ( v13 <= 0 )
            break;
          if ( v1 >= v15 )
            goto LABEL_14;
        }
        if ( v13 == -2 )
          sub_D0048(20, 391, 139, "ssl/ssl_mcnf.c", 72);
        else
          sub_D0048(20, 391, 384, "ssl/ssl_mcnf.c", 74);
        sub_D1240(6, "section=", v14[0]);
        return sub_AAE5C(v6);
      }
      else
      {
LABEL_14:
        sub_AABB4(v6);
        return sub_AAE5C(v6);
      }
    }
    else
    {
      return sub_AAE5C(0);
    }
  }
  else
  {
    sub_D0048(20, 391, 67, "ssl/ssl_mcnf.c", 33);
    return sub_AAE5C(0);
  }
}
