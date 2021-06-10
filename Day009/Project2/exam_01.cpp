/*
  C++ ����� �ý���
  - ��Ʈ��(stream) �����
	: �帣�� �ó���
	: �������� �帧�̳� �����͸� �����ϴ� ��ȣ�� �帧 - ���
	: ���Ա� = �Է� ��Ʈ��, ��� ��Ʈ��
	: ����� �⺻ ���� : ����Ʈ(byte)
	  ����, ������, Ư������ - 1byte / �ѱ�, ���� - 2byte
	: ��Ʈ�� ����(buffer)�� ������.		// buffer-�ӽñ�����
	: �ӽñ����� => ó���ӵ��� ����
	  ����, Ŭ������(clipboard)-CtrlC/CtrlV/CtrlX, ĳ�ø޸�(cache memory)-�ֱ����ġ�� cpu ���̿� ���� (��Ƽ�� : ĳ��2�� / ������ : ĳ��1��)

  - ios => istream, ostream => iostream(fstream - file stream)
	(ios-�ֻ���Ŭ����/ ����-istream, ostream)
  - ostream�� ��� �Լ�(ofstream - ouput file stream)
	: put(char ch) => �ϳ��� ���� ���
	  write(char* str, int n) => ���ڿ�str���� n���� ���� ���
	  flush() => buffer�� �ִ� ���� ���
  - istream�� ��� �Լ�(ifstream - input file stream)
	: int get() => ���ڸ� �о���µ� ������ EOF(End Of File)�� �� '-1'�� ����
	  istream& get(char& ch) => ���ڸ� �о ch�� ����
	  istream& get(char* s, int n) => �Է½�Ʈ���� ���� n-1���� ���ڸ� �о� �迭s�� �����ϰ�, �������� '\0' ���ڻ���
									  ('\n'�� ������ '\0'�� �����ϰ� ����)
  - ����(format, ����) ����� ���
	: c��� printf = print + format, ��¼��Ŀ� �°� ����϶�
	: ��¼���(%) => %d, %c, %f, %s
	: ���� �÷���, ���� �Լ�, ������
  - ������ => ������(�������̵�)
  - ���Կ�����(<<)�� ���⿬����(>>) => ������(�������̵�)
    : cin(�Է�), cout(���), cerr(���-����), clog(���-log,�ý��� ���� ����)
*/