int __fastcall sub_22D5E8(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5, _QWORD *a6, int **a7)
{
  int *v11; // r0
  int v12; // r1
  int v13; // r0
  _BOOL4 v14; // r1
  int result; // r0

  v11 = sub_1AED14(a3);
  v12 = v11[4];
  if ( a7 )
    *a7 = v11;
  switch ( v12 )
  {
    case 0:
      goto LABEL_13;
    case 2:
      if ( a2 )
        goto LABEL_13;
      goto LABEL_5;
    case 3:
      if ( !a1 )
        goto LABEL_5;
LABEL_13:
      result = 0;
      break;
    case 4:
      if ( a2 )
        sub_946E0("Writing to flash memory forbidden in this context");
      goto LABEL_5;
    default:
LABEL_5:
      v13 = v11[1];
      v14 = __PAIR64__(a4, a3) + a5 < (unsigned int)v13;
      if ( !v13 )
        v14 = 1;
      if ( v14 )
        *a6 = a5;
      else
        *a6 = (unsigned int)v13 - __PAIR64__(a4, a3);
      result = 1;
      break;
  }
  return result;
}
