int __fastcall SendData(char a1)
{
  set_cs(1);
  CheckBusy();
  SendByte(250);
  SendByte(a1 & 0xF0);
  SendByte((unsigned __int8)(16 * a1));
  return set_cs(0);
}
