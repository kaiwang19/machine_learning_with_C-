#ifndef ML_LINEARREGRESSION_H//��������û�б�����
#define ML_LINEARREGRESSION_H//�����


//����ο�https://github.com/aluxian/CPP-ML-LinearRegression/blob/master/LinearRegression.h

class LinearRegression {
public:
	//������ʹ��ָ������Ϊ������������ʽ
	double *x;
	//Ԥ��ֵ
	double *y;
	//��������
	int m;
	//ϵ��
	double *theta;
	//����ʵ��
	LinearRegression(double x[], double y[], int m);
	//ѵ��
	void train(double alpha, int iterations);
	//Ԥ��
	void predict(double x);
private:
	//����ģ����ʧ
	static double compute_cost(double x[], double y[], double theta[], int m);
	//���㵥��Ԥ��ֵ
	static double h(double x, double theta);
	//Ԥ��
	static double *calculate_predictions(double x[], double theta[], int m);
	//�ݶ��½�
	static double *gradient_descent(double x[], double y[], double alpha, int iter, double *J, int m);
};

#endif
