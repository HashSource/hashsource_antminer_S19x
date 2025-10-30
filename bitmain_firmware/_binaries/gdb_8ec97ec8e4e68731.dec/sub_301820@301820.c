int __fastcall sub_301820(int a1, int a2, int a3, _DWORD *a4)
{
  if ( (*(_BYTE *)a3 & 3) == 2 )
    (*(void (**)(const char *, ...))(*(_DWORD *)(a3 + 24) + 44))("%P%F: --relax and -r may not be used together\n");
  *a4 = 0;
  return 1;
}
