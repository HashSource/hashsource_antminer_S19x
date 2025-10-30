void sub_1936F8()
{
  _DWORD *v0; // r5
  void *v1; // r1

  if ( !dword_4879DC )
    sub_946E0("No JIT reader loaded.");
  sub_15D778();
  sub_183688();
  sub_193684();
  v0 = (_DWORD *)dword_4879DC;
  if ( dword_4879DC )
  {
    (*(void (**)(void))(*(_DWORD *)dword_4879DC + 20))();
    v1 = (void *)v0[1];
    if ( v1 )
      sub_16350C((int)(v0 + 1), v1);
    sub_33AC04(v0);
  }
  dword_4879DC = 0;
}
