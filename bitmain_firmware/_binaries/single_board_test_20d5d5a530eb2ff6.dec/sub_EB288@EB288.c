char **__fastcall sub_EB288(char **result)
{
  char **v1; // r4
  int v2; // r0
  char **v3; // r5
  char *v4; // r1
  char *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  char *v9; // r0
  char *v10; // r3
  char *v11; // r0
  char *v12; // r0

  if ( result && ((unsigned int)result[5] & 1) != 0 )
  {
    v1 = result;
    v2 = sub_127DE0();
    v3 = (char **)v2;
    if ( !v2 )
    {
      sub_D0048(8, 101, 13, (int)"crypto/objects/obj_lib.c", 28);
      return 0;
    }
    v4 = v1[3];
    *(_DWORD *)(v2 + 20) = (unsigned int)v1[5] | 0xD;
    if ( (int)v4 > 0 )
    {
      v5 = (char *)sub_E9E68(v1[4], v4);
      v3[4] = v5;
      if ( !v5 )
      {
LABEL_13:
        ASN1_OBJECT_free(v3, v6, v7, v8);
        sub_D0048(8, 101, 65, (int)"crypto/objects/obj_lib.c", 53);
        return 0;
      }
      v4 = v1[3];
    }
    v9 = v1[1];
    v10 = v1[2];
    v3[3] = v4;
    v3[2] = v10;
    if ( !v9 || (v11 = sub_E9E3C(v9), (v3[1] = v11) != 0) )
    {
      if ( !*v1 )
        return v3;
      v12 = sub_E9E3C(*v1);
      *v3 = v12;
      if ( v12 )
        return v3;
    }
    goto LABEL_13;
  }
  return result;
}
