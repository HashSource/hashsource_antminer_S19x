int __fastcall sub_115D30(int a1, int a2, int a3, _DWORD *a4)
{
  int (**v6)(void); // r12
  int result; // r0
  const char *v8; // r0

  v6 = (int (**)(void))*((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a1 + 32) >> 3) + 2);
  if ( !v6 )
  {
    *a4 = 0;
    goto LABEL_5;
  }
  result = (*v6)();
  if ( !*a4 )
  {
LABEL_5:
    v8 = (const char *)sub_21B3C4(a1);
    sub_946E0("Could not find the frame base for \"%s\".", v8);
  }
  return result;
}
