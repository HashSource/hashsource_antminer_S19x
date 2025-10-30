int __fastcall sub_1202A8(int a1, __int64 a2, int a3)
{
  int v6; // r1
  int v7; // r9
  int v8; // r10
  int v9; // r12
  int v10; // r0
  int v11; // r3
  const char *v13; // r0
  const char *v14; // r0

  v6 = dword_4872D8;
  v7 = *(_DWORD *)(dword_4872D8 + 344);
  v8 = *(_DWORD *)(v7 + 36);
  if ( !*(_BYTE *)(dword_4872D8 + 236) )
  {
    ((void (__fastcall *)(_DWORD, int))loc_11FFD0)(*(_DWORD *)(dword_4872D8 + 344), dword_4872D8 + 220);
    v6 = dword_4872D8;
  }
  v9 = *(_DWORD *)(v6 + 224);
  if ( !v9 )
  {
    v14 = (const char *)sub_1B87A8(v7);
    sub_946E0("DW_FORM_addr_index used without .debug_addr section [in module %s]", v14);
  }
  if ( a2 + (unsigned __int64)(unsigned int)(a1 * a3) >= *(unsigned int *)(v6 + 228) )
  {
    v13 = (const char *)sub_1B87A8(v7);
    sub_946E0("DW_FORM_addr_index pointing outside of .debug_addr section [in module %s]", v13);
  }
  v10 = v9 + a1 * a3 + a2;
  v11 = *(_DWORD *)(v8 + 4);
  if ( a3 == 4 )
    return (*(int (__fastcall **)(int))(v11 + 40))(v10);
  else
    return (*(int (__fastcall **)(int))(v11 + 28))(v10);
}
