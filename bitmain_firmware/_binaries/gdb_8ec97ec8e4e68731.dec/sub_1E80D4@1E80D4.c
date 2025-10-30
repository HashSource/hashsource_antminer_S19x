int __fastcall sub_1E80D4(const char *a1)
{
  int v2; // r0
  int v3; // r4

  v2 = sub_16F654((int)a1);
  ((void (__fastcall *)(int))loc_1E2770)(v2);
  v3 = dword_488C94;
  if ( !*(_DWORD *)(dword_488C94 + 56) )
    sub_946E0("command can only be used with remote target");
  if ( !a1 )
    sub_946E0("remote-packet command requires packet text as argument");
  sub_259B34("sending: ");
  sub_1E1B28((int)a1);
  sub_259B34(&word_356638);
  sub_1E7DEC(a1);
  sub_1E4EB8((char **)v3, (size_t *)(v3 + 4), 0, 0, 0);
  sub_259B34("received: ");
  sub_1E1B28(*(_DWORD *)v3);
  return sub_259B34(&word_356638);
}
