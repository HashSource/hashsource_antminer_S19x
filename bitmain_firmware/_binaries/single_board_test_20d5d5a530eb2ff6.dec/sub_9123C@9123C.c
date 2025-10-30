int __fastcall sub_9123C(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 1528) )
    return 2;
  if ( sub_A8450(a2, a2, 49, 0, 2) && sub_A8398(a2, 2) && sub_A7EDC(a2) )
  {
    *(_DWORD *)(a1 + 1524) = 1;
    return 1;
  }
  else
  {
    sub_95494(a1, 80, 619, 68, "ssl/statem/extensions_clnt.c", 1219);
    return 0;
  }
}
