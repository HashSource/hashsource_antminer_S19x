int __fastcall sub_132330(int **a1, int *a2, _DWORD *a3, int **a4, int ***a5)
{
  if ( !sub_B870C((int)a4) )
    return sub_131618(a1, (int)a2, a3, (int)a4, a5);
  if ( a2[1] != 1 || a2[3] || sub_B87C0((int)a3, 4) || sub_B87C0((int)a2, 4) || sub_B87C0((int)a4, 4) )
    return BN_mod_exp_mont((int *)a1, a2, a3, a4, a5, 0);
  return sub_132070(a1, *(_DWORD *)*a2, a3, a4, a5, 0);
}
