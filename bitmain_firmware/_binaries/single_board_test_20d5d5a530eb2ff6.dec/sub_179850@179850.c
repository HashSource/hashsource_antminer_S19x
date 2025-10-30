int *__fastcall sub_179850(int *result)
{
  int *v1; // r4

  if ( result )
  {
    if ( result[2] )
    {
      v1 = result;
      sub_DFC38(result[2], 0);
      sub_DFB9C(v1[2], (int (__fastcall *)(_DWORD, int))sub_179658, v1[2]);
      sub_DFB5C(v1[2], (int (__fastcall *)(_DWORD))sub_17969C);
      return sub_DF748((int *)v1[2]);
    }
  }
  return result;
}
