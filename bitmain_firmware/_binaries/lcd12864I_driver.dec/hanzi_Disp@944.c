int __fastcall hanzi_Disp(int a1, int a2, int a3)
{
  int v3; // r4
  int result; // r0
  int v5; // t1

  v3 = a3 - 1;
  SendCommad(addr_tab[8 * a1 + a2]);
  while ( 1 )
  {
    v5 = *(unsigned __int8 *)++v3;
    result = v5;
    if ( !v5 )
      break;
    SendData(result);
  }
  return result;
}
