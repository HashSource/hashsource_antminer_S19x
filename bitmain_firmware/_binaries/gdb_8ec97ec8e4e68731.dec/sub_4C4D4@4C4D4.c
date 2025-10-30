int __fastcall sub_4C4D4(int a1, int a2, int a3, int a4, unsigned int a5, int a6)
{
  unsigned int v9; // r5
  unsigned int v10; // r4
  unsigned int v11; // r5
  int v12; // t1

  v9 = a5 + a6;
  switch ( a1 )
  {
    case 0:
      sub_92B14("ERROR");
      break;
    case 1:
      sub_92B14("SETNS");
      break;
    case 2:
      sub_92B14("OPEN");
      break;
    case 3:
      sub_92B14("UNLINK");
      break;
    case 4:
      sub_92B14("READLINK");
      break;
    case 5:
      sub_92B14("INT");
      break;
    case 6:
      sub_92B14("FD");
      break;
    case 7:
      sub_92B14("INTSTR");
      break;
    default:
      sub_92B14("unknown-packet-%d", a1);
      break;
  }
  sub_92B14(" %d %d %d \"", a2, a3, a4);
  if ( a5 < v9 )
  {
    v10 = a5 - 1;
    v11 = v9 - 1;
    do
    {
      v12 = *(unsigned __int8 *)++v10;
      if ( (unsigned int)(v12 - 32) > 0x5E )
        sub_92B14("\\%o");
      else
        sub_92B14("%c");
    }
    while ( v10 != v11 );
  }
  return sub_92B14("\"");
}
