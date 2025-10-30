int __fastcall sub_138F98(int *a1, int *a2)
{
  int *v4; // r5
  int result; // r0
  int v6; // r0

  v4 = a2;
  if ( a2 || (v4 = sub_138F60(a1)) != 0 )
  {
    switch ( (unsigned int)sub_EAC84(*a1) )
    {
      case 0x15u:
        return (int)v4;
      case 0x16u:
        v6 = sub_13A7C4(a1);
        goto LABEL_6;
      case 0x17u:
        v6 = sub_1382E4((int)a1);
        goto LABEL_6;
      case 0x19u:
        v6 = sub_1790A4(a1);
        goto LABEL_6;
      case 0x1Au:
        v6 = sub_1795CC(a1);
LABEL_6:
        if ( !v6 )
          goto LABEL_12;
        result = sub_B70C0(v6, (int)v4);
        break;
      default:
        sub_D0048(46, 111, 156, (int)"crypto/cms/cms_lib.c", 94);
LABEL_12:
        result = 0;
        if ( !a2 )
        {
          BIO_vfree_0((int)v4);
          result = 0;
        }
        break;
    }
  }
  else
  {
    sub_D0048(46, 111, 127, (int)"crypto/cms/cms_lib.c", 64);
    return 0;
  }
  return result;
}
