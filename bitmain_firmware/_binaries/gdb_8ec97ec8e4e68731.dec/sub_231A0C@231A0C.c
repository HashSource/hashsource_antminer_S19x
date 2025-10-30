int sub_231A0C()
{
  int result; // r0
  int v1; // r0
  int v2; // [sp+4h] [bp-10h] BYREF
  __int64 v3; // [sp+8h] [bp-Ch]

  v2 = dword_4878EC;
  v3 = qword_4878F0;
  dword_4878EC = dword_475848;
  qword_4878F0 = qword_47584C;
  sub_CDD18();
  if ( !sub_98F78(&v2, &dword_475848) )
  {
    v1 = ps_getpid_0((int)&v2);
    sub_183850(v1);
  }
  sub_DB35C(2);
  sub_1DDCF4();
  sub_FA464();
  result = sub_15D778();
  if ( off_48A56C )
    return off_48A56C(result);
  return result;
}
