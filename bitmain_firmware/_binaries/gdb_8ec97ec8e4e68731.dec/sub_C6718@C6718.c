int sub_C6718()
{
  sub_D23D4();
  memcpy(&unk_478300, &unk_47840C, 0x48u);
  dword_478304 = (int)sub_C5D74;
  dword_478324 = (int)sub_C5A94;
  dword_47832C = (int)sub_C5A10;
  dword_478330 = (int)sub_C5964;
  dword_478328 = (int)sub_C5D24;
  dword_478314 = (int)sub_C6454;
  dword_478320 = (int)sub_C5C18;
  sub_D21C4("catch", "Catch an exception, when caught.", sub_C6428, 0, 0, 1);
  sub_D21C4("throw", "Catch an exception, when thrown.", sub_C63FC, 0, 0, 1);
  sub_D21C4("rethrow", "Catch an exception, when rethrown.", sub_C63D0, 0, 0, 1);
  return sub_26CB90("_exception", &off_37D514, 0);
}
