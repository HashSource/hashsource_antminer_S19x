int __fastcall sub_24570(int a1, unsigned int **a2, int a3)
{
  if ( *a2 )
    return sub_242BC(a1, a2, a3);
  *a2 = sub_244DC(a1);
  return sub_242BC(a1, a2, a3);
}
