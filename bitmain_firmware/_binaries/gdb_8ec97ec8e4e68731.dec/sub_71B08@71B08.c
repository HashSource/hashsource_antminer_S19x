int __fastcall sub_71B08(int a1, const char *a2, int a3)
{
  int result; // r0
  int v6; // r7
  int v7; // r5
  int *v10; // [sp+Ch] [bp-8h] BYREF

  if ( strchr(a2, 46) )
  {
    result = sub_71270(a1, 0, a2);
    if ( result )
      sub_946E0("Invalid use of type.");
  }
  else
  {
    v6 = sub_A5400(a2, dword_487CD0, 1, &v10);
    v7 = sub_9253C(sub_7074C, v10);
    if ( v6 != 1 || *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(*v10 + 32) >> 3)) == 8 )
      sub_70948(a1, 89, (int)a2, a3);
    else
      sub_70758(a1, v10[1], *v10);
    return sub_92620(v7);
  }
  return result;
}
