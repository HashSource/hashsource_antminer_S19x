int __fastcall sub_138774(int a1, int *a2, int a3, int a4)
{
  char *v8; // r6
  int v9; // r0
  char *v10; // r0
  int v11; // r12

  v8 = sub_EAC84(*a2);
  v9 = sub_139124(a2);
  v10 = sub_EAC84(v9);
  if ( v8 == (char *)22 )
    v11 = *(_DWORD *)(a2[1] + 4);
  else
    v11 = 0;
  return sub_1724C8(a1, a2, a3, a4, v8, v10, v11, CMS_ContentInfo_it);
}
