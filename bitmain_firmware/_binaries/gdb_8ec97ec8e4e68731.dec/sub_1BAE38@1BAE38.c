int __fastcall sub_1BAE38(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r5

  v3 = a1;
  v4 = a2;
  switch ( a3 )
  {
    case 9:
      if ( !(unsigned int)sub_25DC1C(a1) )
        return sub_25DC1C(v4) == 0;
      return 0;
    case 10:
      if ( !(unsigned int)sub_25DC1C(a1) )
        return 1;
      return sub_25DC1C(v4) == 0;
    case 14:
      return sub_25E07C(a1, a2);
    case 15:
      return sub_25E07C(a1, a2) == 0;
    case 16:
      return sub_25F43C(a1, a2);
    case 17:
      a2 = a1;
      a1 = v4;
      return sub_25F43C(a1, a2);
    case 18:
      if ( !(unsigned int)sub_25F43C(a1, a2) )
        return sub_25E07C(v3, v4) != 0;
      return 1;
    case 19:
      return (unsigned int)sub_25F43C(a2, a1) || sub_25E07C(v3, v4) != 0;
    default:
      sub_946E0("Attempt to perform an unsupported operation");
  }
}
