char **__fastcall sub_EB11C(char *a1, int a2, int a3)
{
  char **result; // r0
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r4

  if ( a2 && sub_EAFD0(a2) || a3 && sub_EAF68(a3) )
  {
    sub_D0048(8, 100, 102, (int)"crypto/objects/obj_dat.c", 699);
    return 0;
  }
  else
  {
    result = sub_EB03C(a1, 1);
    v7 = result;
    if ( result )
    {
      if ( sub_EAC84((int)result) )
      {
        v12 = 0;
        sub_D0048(8, 100, 102, (int)"crypto/objects/obj_dat.c", 710);
      }
      else
      {
        v8 = sub_EA8DC(1);
        *v7 = a2;
        v7[2] = v8;
        v7[1] = a3;
        v12 = sub_EA8F0((int)v7);
        *v7 = 0;
        v7[1] = 0;
      }
      ASN1_OBJECT_free(v7, v9, v10, v11);
      return (char **)v12;
    }
  }
  return result;
}
