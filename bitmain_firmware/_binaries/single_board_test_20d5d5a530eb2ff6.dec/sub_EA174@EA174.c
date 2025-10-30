int sub_EA174()
{
  int v0; // r0
  int v1; // r5
  int result; // r0
  int v3; // r3

  v0 = sub_E0808();
  dword_6E1A94 = 0;
  dword_6E1A98 = sub_10C510(v0);
  if ( dword_6E1A98 )
  {
    v1 = sub_DF6B4(
           (unsigned __int8 *(__fastcall *)(unsigned __int8 *))sub_EA13C,
           (int (**)(const char *, const char *))((char *)&loc_EA230 + 1));
    dword_6E1A94 = v1;
  }
  else
  {
    v1 = dword_6E1A94;
  }
  if ( !v1 )
  {
    sub_10C574(dword_6E1A98);
    dword_6E1A98 = 0;
  }
  result = sub_E0808();
  v3 = dword_6E1A94;
  if ( dword_6E1A94 )
    v3 = dword_6E1A98 != 0;
  dword_6E1A9C = v3;
  return result;
}
