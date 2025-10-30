int __fastcall sub_13918C(int *a1, char **a2)
{
  char *v4; // r0
  int result; // r0
  int *v6; // r4
  char **v7; // r5

  v4 = sub_EAC84(*a1);
  if ( v4 == (char *)25 )
    goto LABEL_15;
  if ( (int)v4 > 25 )
  {
    if ( v4 == (char *)205 )
    {
      v6 = *(int **)(a1[1] + 20);
      goto LABEL_10;
    }
    if ( v4 != (char *)786 )
    {
      if ( v4 != (char *)26 )
      {
LABEL_6:
        sub_D0048(46, 130, 152, (int)"crypto/cms/cms_lib.c", 219);
        return 0;
      }
      v6 = *(int **)(a1[1] + 4);
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  if ( v4 == (char *)22 )
  {
LABEL_15:
    v6 = *(int **)(a1[1] + 8);
    goto LABEL_10;
  }
  if ( v4 != (char *)23 )
    goto LABEL_6;
LABEL_9:
  v6 = *(int **)(a1[1] + 12);
LABEL_10:
  if ( !v6 )
    return 0;
  result = 1;
  if ( !a2 )
    return result;
  v7 = sub_EB288(a2);
  if ( !v7 )
    return 0;
  ASN1_OBJECT_free(*v6);
  result = 1;
  *v6 = (int)v7;
  return result;
}
