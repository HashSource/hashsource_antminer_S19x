void __fastcall sub_E15F0(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6

  *a1 = 0;
  v4 = sub_9253C((int)&loc_E082C, (int)a1);
  if ( sub_274C9C("btrace", "btrace.dtd", &off_388DB4, a2, a1) )
    sub_946E0("Error parsing branch trace.");
  sub_92640(v4);
}
